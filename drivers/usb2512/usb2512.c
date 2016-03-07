/*
 * Copyright (C) 2014 Freescale Semiconductor, Inc. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <linux/device.h>
#include <linux/err.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/of.h>
#include <linux/of_gpio.h>
#include <linux/platform_device.h>
#include <linux/delay.h>

#define DRIVER_NAME "usb2512-hub"

static const struct of_device_id usb2512_dt_ids[] = {
	{ .compatible = "usb2512,hosthub", },
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, usb2512_dt_ids);

static int usb2512_probe(struct platform_device *pdev)
{
	struct device_node *np = pdev->dev.of_node;
	static int rst_gpio;
	int retval = 0;
	
	dev_err(&pdev->dev,"++++++++usb2512_probe++++  \n");		

	/* request reset pin */
	rst_gpio = of_get_named_gpio(np, "usb2512_rst", 0);
	if (!gpio_is_valid(rst_gpio)) {
		dev_err(&pdev->dev, "no sensor reset pin available\n");
		return -EINVAL;
	}
	retval = devm_gpio_request_one(&pdev->dev, rst_gpio, GPIOF_OUT_INIT_LOW,
					"usb2512reset");
	if (retval < 0)
		return retval;

	mdelay(50);
        gpio_set_value(rst_gpio, 1);
        mdelay(100);

	dev_err(&pdev->dev,"------usb2512_probe--------  \n");		
	return retval;
}

static struct platform_driver usb2512_driver = {
	.probe	= usb2512_probe,
	.driver = {
		.of_match_table = usb2512_dt_ids,
		.name	= DRIVER_NAME,
		.owner	= THIS_MODULE,
	},
};
module_platform_driver(usb2512_driver);

MODULE_AUTHOR("Freescale Semiconductor, Inc.");
MODULE_DESCRIPTION("usb2512 hosthub rst driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRIVER_NAME);
