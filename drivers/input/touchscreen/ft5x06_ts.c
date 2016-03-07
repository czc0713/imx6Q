/*
 *   Boundary Devices FTx06 touch screen controller.
 *
 *   Copyright (c) by Boundary Devices <info@boundarydevices.com>
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 *
 */
#include <linux/module.h>
#include <linux/init.h>
#include <linux/i2c.h>
#include <linux/slab.h>
#include <linux/interrupt.h>
#include <linux/wait.h>
#include <linux/io.h>
#include <linux/gpio.h>
#include <linux/of_gpio.h>
#include <linux/proc_fs.h>
#include <linux/delay.h>
#include <linux/input/mt.h>

#ifdef CONFIG_TOUCHSCREEN_FT5X06_SINGLE_TOUCH
#define USE_ABS_SINGLE
#else
//#define USE_ABS_SINGLE
#define USE_ABS_MT
#endif

#define WORK_MODE	0
#define FACTORY_MODE	4
//#define DEBUG
static int calibration[7] = {
	65536,0,0,
	0,65536,0,
	0
};
module_param_array(calibration, int, NULL, S_IRUGO | S_IWUSR);

static int screenres[2];
module_param_array(screenres, int, NULL, S_IRUGO | S_IWUSR);

#define MAX_TOUCHES 12

static void translate(int *px, int *py)
{
	int x, y, x1, y1;
	if (calibration[6]) {
		x1 = *px;
		y1 = *py;

		x = calibration[0] * x1 +
			calibration[1] * y1 +
			calibration[2];
		x /= calibration[6];
		if (x < 0)
			x = 0;
		y = calibration[3] * x1 +
			calibration[4] * y1 +
			calibration[5];
		y /= calibration[6];
		if (y < 0)
			y = 0;
		*px = x ;
		*py = y ;
	}
}

struct point {
	int	x;
	int	y;
	int	id;
};

struct ft5x06_ts {
	struct i2c_client *client;
	struct input_dev	*idev;
	int			use_count;
	int			bReady;
	int			irq;
	unsigned		gp;
	struct proc_dir_entry  *procentry;
	unsigned		down_mask;
	unsigned		max_x;
	unsigned		max_y;
};
static const char *client_name = "ft5x06";

struct ft5x06_ts *gts;

static char const procentryname[] = {
   "ft5x06"
};

static int ts_startup(struct ft5x06_ts *ts);
static void ts_shutdown(struct ft5x06_ts *ts);

/*-----------------------------------------------------------------------*/
static void write_reg(struct ft5x06_ts *ts, int regnum, int value)
{
	u8 regnval[] = {
		regnum,
		value
	};
	struct i2c_msg pkt = {
		ts->client->addr, 0, sizeof(regnval), regnval
	};
	int ret = i2c_transfer(ts->client->adapter, &pkt, 1);
	if (ret != 1)
		printk(KERN_WARNING "%s: i2c_transfer failed\n", __func__);
	else
		printk(KERN_DEBUG "%s: set register 0x%02x to 0x%02x\n",
		       __func__, regnum, value);
}

static void set_mode(struct ft5x06_ts *ts, int mode)
{
	write_reg(ts, 0, (mode&7)<<4);
	printk(KERN_DEBUG "%s: changed mode to 0x%02x\n", __func__, mode);
}

static void release_slots(struct ft5x06_ts *ts, unsigned mask)
{
	struct input_dev *idev = ts->idev;

	while (mask) {
		int slot = __ffs(mask);

		mask &= ~(1 << slot);
		input_mt_slot(idev, slot);
		input_mt_report_slot_state(idev,  MT_TOOL_FINGER, 0);
	}
}

static inline void ts_evt_add(struct ft5x06_ts *ts,
			      unsigned buttons, struct point *p)
{
	struct input_dev *idev = ts->idev;
	unsigned down_mask = 0;
	unsigned tmp;
	int i;
	if (!buttons) {
		/* send release to user space. */
#ifdef USE_ABS_MT
		tmp = ts->down_mask;
		ts->down_mask = 0;
		release_slots(ts, tmp);
#endif
#ifdef USE_ABS_SINGLE
		input_report_abs(idev, ABS_PRESSURE, 0);
		input_report_key(idev, BTN_TOUCH, 0);
#endif
	} else {
#ifdef USE_ABS_MT
		for (i = 0; i < buttons; i++) {
			translate(&p[i].x, &p[i].y);
			input_mt_slot(idev, p[i].id);
			input_mt_report_slot_state(idev,  MT_TOOL_FINGER, 1);
			down_mask |= 1 << p[i].id;
			input_report_abs(idev, ABS_MT_POSITION_X, p[i].x);
			input_report_abs(idev, ABS_MT_POSITION_Y, p[i].y);
		}
		tmp = ts->down_mask & ~down_mask;
		ts->down_mask = down_mask;
		release_slots(ts, tmp);
#else
		translate(&p[0].x, &p[0].y);
#endif
#ifdef USE_ABS_SINGLE
		input_report_abs(idev, ABS_X, p[0].x);
		input_report_abs(idev, ABS_Y, p[0].y);
		input_report_abs(idev, ABS_PRESSURE, 1);
		input_report_key(idev, BTN_TOUCH, 1);
#endif
	}
	input_sync(idev);
}

static int ts_open(struct input_dev *idev)
{
	struct ft5x06_ts *ts = input_get_drvdata(idev);
	return ts_startup(ts);
}

static void ts_close(struct input_dev *idev)
{
	struct ft5x06_ts *ts = input_get_drvdata(idev);
	ts_shutdown(ts);
}

static inline int ts_register(struct ft5x06_ts *ts)
{
	struct input_dev *idev;
	idev = input_allocate_device();
	if (idev == NULL)
		return -ENOMEM;

	ts->max_x = 0xFFF; //0x7ff;
	ts->max_y = 0xFFF; //0x7ff;
	if (screenres[0])
		ts->max_x = screenres[0] - 1;
	if (screenres[1])
		ts->max_y = screenres[1] - 1;

	pr_info("%s resolution is %dx%d\n", client_name, ts->max_x + 1, ts->max_y + 1);
	ts->idev = idev;
	idev->name      = procentryname ;
	idev->id.bustype = BUS_I2C;
	idev->id.product = ts->client->addr;
	idev->open      = ts_open;
	idev->close     = ts_close;

	__set_bit(EV_ABS, idev->evbit);
	__set_bit(EV_KEY, idev->evbit);
	__set_bit(EV_SYN, idev->evbit);

#ifdef USE_ABS_MT
	input_mt_init_slots(idev, 16, 0);
	input_set_abs_params(idev, ABS_MT_POSITION_X, 0, ts->max_x, 0, 0);
	input_set_abs_params(idev, ABS_MT_POSITION_Y, 0, ts->max_y, 0, 0);
	input_set_abs_params(idev, ABS_MT_TRACKING_ID, 0, MAX_TOUCHES, 0, 0);
#endif
#ifdef USE_ABS_SINGLE
	__set_bit(BTN_TOUCH, idev->keybit);
	input_set_abs_params(idev, ABS_X, 0, ts->max_x, 0, 0);
	input_set_abs_params(idev, ABS_Y, 0, ts->max_y, 0, 0);
	input_set_abs_params(idev, ABS_PRESSURE, 0, 1, 0, 0);
#endif

	input_set_drvdata(idev, ts);
	return input_register_device(idev);
}

static inline void ts_deregister(struct ft5x06_ts *ts)
{
	if (ts->idev) {
		input_unregister_device(ts->idev);
		input_free_device(ts->idev);
		ts->idev = NULL;
	}
}

#ifdef DEBUG
static void printHex(u8 const *buf, unsigned len)
{
	char hex[512];
	char *next = hex ;
	char *end = hex+sizeof(hex);

	while (len--) {
		next += snprintf(next, end-next, "%02x", *buf++);
		if (next >= end) {
			hex[sizeof(hex)-1] = '\0' ;
			break;
		}
	}
	printk(KERN_ERR "%s\n", hex);
}
#endif

static int proc_regnum = 0;
static int ft5x06_proc_read
	(struct file *f,
	 char __user *ubuf,
	 size_t count,
	 loff_t *off)
{
	int ret;
	unsigned char startch[1] = { (u8)proc_regnum };
	unsigned char buf[1];
	struct i2c_msg readpkt[2] = {
		{gts->client->addr, 0, 1, startch},
		{gts->client->addr, I2C_M_RD, sizeof(buf), buf}
	};
	ret = i2c_transfer(gts->client->adapter, readpkt,
			   ARRAY_SIZE(readpkt));
	if (ret != ARRAY_SIZE(readpkt)) {
		printk(KERN_WARNING "%s: i2c_transfer failed\n",
		       client_name);
	} else {
		printk (KERN_ERR "ft5x06[0x%02x] == 0x%02x\n", (u8)proc_regnum, buf[0]);
	}
	return 0 ;
}

static int
ft5x06_proc_write
	(struct file *file,
	 const char __user *buffer,
	 size_t count,
	 loff_t *data)
{
	proc_regnum = simple_strtoul(buffer,0,0);
	return count ;
}

struct file_operations proc_fops = {
	.read = ft5x06_proc_read,
	.write = ft5x06_proc_write,
};

static irqreturn_t ts_interrupt(int irq, void *id)
{
	struct ft5x06_ts *ts = id;
	int ret;
	struct point points[MAX_TOUCHES];
	unsigned char buf[3+(6*MAX_TOUCHES)];

	unsigned char startch[1] = { 0 };
	struct i2c_msg readpkt[2] = {
		{ts->client->addr, 0, 1, startch},
		{ts->client->addr, I2C_M_RD, sizeof(buf), buf}
	};
	int buttons = 0 ;

	while (0 == gpio_get_value(ts->gp)) {
		ts->bReady = 0;
		ret = i2c_transfer(ts->client->adapter, readpkt,
				   ARRAY_SIZE(readpkt));
		if (ret != ARRAY_SIZE(readpkt)) {
			printk(KERN_WARNING "%s: i2c_transfer failed\n",
			       client_name);
			msleep(1000);
		} else {
			int i;
			unsigned char *p = buf+3;
#ifdef DEBUG
			printHex(buf, sizeof(buf));
#endif
			buttons = buf[2];
			if (buttons > MAX_TOUCHES) {
				int interrupting = (0 == gpio_get_value(ts->gp));
				if (interrupting) {
					printk(KERN_ERR
					       "%s: invalid button count 0x%02x\n",
					       __func__, buttons);
				} /* not garbage from POR */
				buttons = interrupting ? MAX_TOUCHES : 0;
			} else {
				for (i = 0; i < buttons; i++) {
					points[i].x = (((p[0] & 0x0f) << 8)
						       | p[1]) & 0xFFF;//0x7ff;
					points[i].id = (p[2]>>4);
					points[i].y = (((p[2] & 0x0f) << 8)
						       | p[3]) & 0xFFF;//0x7ff;
					if (points[i].x > ts->max_x)
						points[i].x = ts->max_x;
					if (points[i].y > ts->max_y)
						points[i].x = ts->max_y;
					p += 6;
				}
			}
		}

#ifdef DEBUG
		printk(KERN_ERR "%s: buttons = %d, "
				"points[0].x = %d, "
				"points[0].y = %d\n",
		       client_name, buttons, points[0].x, points[0].y);
#endif
		ts_evt_add(ts, buttons, points);
	}
	return IRQ_HANDLED;
}

#define ID_G_THGROUP		0x80
#define ID_G_PERIODMONITOR	0x89
#define FT5X0X_REG_HEIGHT_B	0x8a
#define FT5X0X_REG_MAX_FRAME	0x8b
#define FT5X0X_REG_FEG_FRAME	0x8e
#define FT5X0X_REG_LEFT_RIGHT_OFFSET	0x92
#define FT5X0X_REG_UP_DOWN_OFFSET	0x93
#define FT5X0X_REG_DISTANCE_LEFT_RIGHT	0x94
#define FT5X0X_REG_DISTANCE_UP_DOWN	0x95
#define FT5X0X_REG_MAX_X_HIGH		0x98
#define FT5X0X_REG_MAX_X_LOW		0x99
#define FT5X0X_REG_MAX_Y_HIGH		0x9a
#define FT5X0X_REG_MAX_Y_LOW		0x9b
#define FT5X0X_REG_K_X_HIGH		0x9c
#define FT5X0X_REG_K_X_LOW		0x9d
#define FT5X0X_REG_K_Y_HIGH		0x9e
#define FT5X0X_REG_K_Y_LOW		0x9f

#define ID_G_AUTO_CLB	0xa0
#define ID_G_B_AREA_TH	0xae

#ifdef DEBUG
static void dumpRegs(struct ft5x06_ts *ts, unsigned start, unsigned end)
{
	u8 regbuf[512];
	unsigned char startch[1] = { start };
	int ret ;
	struct i2c_msg readpkt[2] = {
		{ts->client->addr, 0, 1, startch},
		{ts->client->addr, I2C_M_RD, end-start+1, regbuf}
	};
	ret = i2c_transfer(ts->client->adapter, readpkt, ARRAY_SIZE(readpkt));
	if (ret != ARRAY_SIZE(readpkt)) {
		printk(KERN_WARNING "%s: i2c_transfer failed\n", client_name);
	} else {
		printk(KERN_ERR "registers %02x..%02x\n", start, end);
		printHex(regbuf, end-start+1);
	}
}
#endif

static int ts_startup(struct ft5x06_ts *ts)
{
	int ret = 0;
	if (ts == NULL)
		return -EIO;

	if (ts->use_count++ != 0)
		goto out;

	ret = request_threaded_irq(ts->irq, NULL, ts_interrupt,
				     IRQF_TRIGGER_LOW | IRQF_ONESHOT,
				     client_name, ts);
	if (ret) {
		pr_err("%s: error requesting irq %d\n", __func__, ts->irq);
		goto out;
	}

#ifdef DEBUG
	set_mode(ts, FACTORY_MODE);
	dumpRegs(ts, 0x4c, 0x4C);
	write_reg(ts, 0x4C, 0x05);
	dumpRegs(ts, 0, 0x4C);
#endif
	set_mode(ts, WORK_MODE);
#ifdef DEBUG
	dumpRegs(ts, 0x3b, 0x3b);
	dumpRegs(ts, 0x6a, 0x6a);
	dumpRegs(ts, ID_G_THGROUP, ID_G_PERIODMONITOR);
	dumpRegs(ts, FT5X0X_REG_HEIGHT_B, FT5X0X_REG_K_Y_LOW);
	dumpRegs(ts, ID_G_AUTO_CLB, ID_G_B_AREA_TH);
#endif
	set_mode(ts, WORK_MODE);

 out:
	if (ret)
		ts->use_count--;
	return ret;
}

/*
 * Release touchscreen resources.  Disable IRQs.
 */
static void ts_shutdown(struct ft5x06_ts *ts)
{
	if (ts) {
		if (--ts->use_count == 0) {
			free_irq(ts->irq, ts);
		}
	}
}
/*-----------------------------------------------------------------------*/

/* Return 0 if detection is successful, -ENODEV otherwise */
static int detect_ft5x06(struct i2c_client *client)
{
	struct i2c_adapter *adapter = client->adapter;
	char buffer;
	struct i2c_msg pkt = {
		client->addr,
		I2C_M_RD,
		sizeof(buffer),
		&buffer
	};
	if (!i2c_check_functionality(adapter, I2C_FUNC_I2C))
		return -ENODEV;
	if (i2c_transfer(adapter, &pkt, 1) != 1)
		return -ENODEV;
	return 0;
}

/* Return 0 if detection is successful, -ENODEV otherwise */
static int ts_detect(struct i2c_client *client,
			  struct i2c_board_info *info)
{
	int err = detect_ft5x06(client);
	if (!err)
		strlcpy(info->type, "ft5x06-ts", I2C_NAME_SIZE);
	return err;
}

static int ts_probe(struct i2c_client *client, const struct i2c_device_id *id)
{
	int err = 0;
	int rst_tch;
	struct ft5x06_ts *ts;
	struct device *dev = &client->dev;
        struct device_node *np = client->dev.of_node;
	if (gts) {
		printk(KERN_ERR "%s: Error gts is already allocated\n",
		       client_name);
		return -ENOMEM;
	}

        rst_tch = of_get_named_gpio(np, "rst_tch", 0);
	if (!gpio_is_valid(rst_tch)) {
		dev_err(dev, " no  reset pin available\n");
		return -EINVAL;
	}
   	//msleep(60);
	
	err = devm_gpio_request_one(dev, rst_tch, GPIOF_OUT_INIT_LOW,"ft5x06 reset");
	if (err < 0)
        {
		dev_err(dev, " reset pin failed \n");
      	        return err;
    	}

	mdelay(50);
	gpio_set_value(rst_tch, 1);
	mdelay(100);


	if (detect_ft5x06(client) != 0) {
		dev_err(dev, "%s: Could not detect touch screen.\n",
			client_name);
		return -ENODEV;
	}
	ts = kzalloc(sizeof(struct ft5x06_ts), GFP_KERNEL);
	if (!ts) {
		dev_err(dev, "Couldn't allocate memory for %s\n", client_name);
		return -ENOMEM;
	}
	ts->client = client;
	ts->irq = client->irq ;
	ts->gp = of_get_named_gpio(np, "wakeup-gpios", 0);
	if (!gpio_is_valid(ts->gp))
		return -ENODEV;

	err = gpio_request(ts->gp, "ft5x06_irq");
	if (err < 0) {
		dev_err(&client->dev,
			"request gpio failed, cannot wake up controller: %d\n",
			err);
		return err;
	}

	printk(KERN_INFO "%s: %s touchscreen irq=%i, gp=%i\n", __func__,
	       client_name, ts->irq, ts->gp);
	i2c_set_clientdata(client, ts);
	err = ts_register(ts);
	if (err == 0) {
		gts = ts;
		ts->procentry = proc_create(procentryname, 0x660, NULL,
					    &proc_fops);
		return 0;
	}

	printk(KERN_WARNING "%s: ts_register failed\n", client_name);
	ts_deregister(ts);
	kfree(ts);
	return err;
}

static int ts_remove(struct i2c_client *client)
{
	struct ft5x06_ts *ts = i2c_get_clientdata(client);
	remove_proc_entry(procentryname, 0);
	if (ts == gts) {
		gts = NULL;
		gpio_free(ts->gp);
		ts_deregister(ts);
	} else {
		printk(KERN_ERR "%s: Error ts!=gts\n", client_name);
	}
	kfree(ts);
	return 0;
}


/*-----------------------------------------------------------------------*/

static const struct i2c_device_id ts_idtable[] = {
	{ "ft5x06-ts", 0 },
	{ }
};
MODULE_DEVICE_TABLE(i2c, ts_idtable);

static const struct of_device_id ft5x06_dt_ids[] = {
       {
               .compatible = "ft5x06,ft5x06-touch",
       }, {
               /* sentinel */
       }
};
MODULE_DEVICE_TABLE(of, ft5x06_dt_ids);

static struct i2c_driver ts_driver = {
	.driver = {
		.owner		= THIS_MODULE,
		.name		= "ft5x06-ts",
		.of_match_table = ft5x06_dt_ids,
	},
	.id_table	= ts_idtable,
	.probe		= ts_probe,
	.remove		= ts_remove,
	.detect		= ts_detect,
};

static int __init ts_init(void)
{
	int res = i2c_add_driver(&ts_driver);
	if (res) {
		printk(KERN_WARNING "%s: i2c_add_driver failed\n", client_name);
		return res;
	}
	printk(KERN_INFO "%s: ts_init\n", client_name);
	return 0;
}

static void __exit ts_exit(void)
{
	i2c_del_driver(&ts_driver);
}

MODULE_AUTHOR("Boundary Devices <info@boundarydevices.com>");
MODULE_DESCRIPTION("I2C interface for FocalTech ft5x06 touch screen controller.");
MODULE_LICENSE("GPL");

module_init(ts_init)
module_exit(ts_exit)
