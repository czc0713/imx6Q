scripts/kconfig/conf --silentoldconfig Kconfig
  CHK     include/config/kernel.release
  CHK     include/generated/uapi/linux/version.h
  CHK     include/generated/utsrelease.h
make[1]: `include/generated/mach-types.h' is up to date.
  CALL    scripts/checksyscalls.sh
  CHK     include/generated/compile.h
  CC      drivers/irqchip/irqchip.o
  CC      drivers/irqchip/irq-gic.o
  CC      drivers/input/touchscreen/ft5x06_ts.o
  CC      drivers/leds/led-core.o
  LD      drivers/input/touchscreen/built-in.o
  CC      drivers/input/keyreset.o
  CC      drivers/leds/led-class.o
  CC      drivers/irqchip/irq-gic-common.o
  LD      drivers/irqchip/built-in.o
  CC      drivers/leds/led-triggers.o
  LD      drivers/input/built-in.o
  LD      drivers/lguest/built-in.o
  LD      drivers/macintosh/built-in.o
  CC      drivers/md/dm-uevent.o
  LD      drivers/media/common/b2c2/built-in.o
  LD      drivers/media/common/saa7146/built-in.o
  LD      drivers/media/common/siano/built-in.o
  LD      drivers/media/common/built-in.o
  CC      drivers/leds/leds-gpio-register.o
  LD      drivers/media/firewire/built-in.o
  CC      drivers/media/i2c/soc_camera/ov2640.o
  CC      drivers/leds/leds-gpio.o
  CC      drivers/leds/trigger/ledtrig-timer.o
  CC      drivers/leds/trigger/ledtrig-oneshot.o
  CC      drivers/leds/trigger/ledtrig-heartbeat.o
  CC      drivers/md/dm.o
  LD      drivers/media/i2c/soc_camera/built-in.o
  CC      drivers/media/i2c/ir-kbd-i2c.o
  CC      drivers/leds/trigger/ledtrig-backlight.o
  CC      drivers/leds/trigger/ledtrig-gpio.o
  LD      drivers/media/i2c/built-in.o
  LD      drivers/media/mmc/siano/built-in.o
  LD      drivers/media/mmc/built-in.o
  LD      drivers/media/parport/built-in.o
  CC      drivers/md/dm-table.o
  LD      drivers/media/pci/b2c2/built-in.o
  LD      drivers/leds/trigger/built-in.o
  LD      drivers/media/pci/ddbridge/built-in.o
  LD      drivers/leds/built-in.o
  LD      drivers/media/pci/dm1105/built-in.o
  LD      drivers/media/pci/mantis/built-in.o
  LD      drivers/media/pci/ngene/built-in.o
  LD      drivers/media/pci/pluto2/built-in.o
  LD      drivers/media/pci/pt1/built-in.o
  LD      drivers/media/pci/saa7146/built-in.o
  CC      drivers/mfd/stmpe.o
  LD      drivers/media/pci/ttpci/built-in.o
  LD      drivers/media/pci/built-in.o
  CC      drivers/media/platform/coda.o
  CC      drivers/mfd/stmpe-i2c.o
  CC      drivers/md/dm-target.o
  CC      drivers/misc/fxos8700.o
  CC      drivers/mfd/wm8994-core.o
  CC      drivers/mfd/wm8994-irq.o
  CC      drivers/misc/fxas2100x.o
  CC      drivers/md/dm-linear.o
  CC      drivers/mfd/wm8994-regmap.o
  CC      drivers/md/dm-stripe.o
  CC      drivers/misc/uid_stat.o
  CC      drivers/mfd/mc13xxx-core.o
  LD      drivers/media/platform/davinci/built-in.o
  LD      drivers/misc/carma/built-in.o
  LD      drivers/misc/cb710/built-in.o
  CC      drivers/media/platform/mxc/capture/mxc_v4l2_capture.o
  CC      drivers/misc/eeprom/at24.o
  CC      drivers/md/dm-ioctl.o
  CC      drivers/mfd/mc13xxx-spi.o
  CC      drivers/misc/eeprom/at25.o
  CC      drivers/mfd/mc13xxx-i2c.o
  CC      drivers/mfd/mfd-core.o
  LD      drivers/misc/eeprom/built-in.o
  LD      drivers/misc/lis3lv02d/built-in.o
  LD      drivers/misc/mic/built-in.o
  LD      drivers/misc/ti-st/built-in.o
  CC      drivers/misc/sram.o
  CC      drivers/md/dm-io.o
  CC      drivers/mfd/da9052-irq.o
  LD      drivers/misc/built-in.o
  CC      drivers/mfd/da9052-core.o
  CC      drivers/media/platform/mxc/capture/ipu_fg_overlay_sdc.o
  CC      drivers/mfd/da9052-i2c.o
  CC      drivers/mmc/card/block.o
  CC      drivers/md/dm-kcopyd.o
  CC      drivers/media/platform/mxc/capture/ipu_bg_overlay_sdc.o
  CC      drivers/mfd/max17135-core.o
  CC      drivers/mfd/si476x-cmd.o
  CC      drivers/media/platform/mxc/capture/ipu_prp_enc.o
  CC      drivers/md/dm-sysfs.o
  CC      drivers/md/dm-stats.o
  CC      drivers/mmc/card/queue.o
  CC      drivers/media/platform/mxc/capture/ipu_still.o
  CC      drivers/mfd/si476x-prop.o
  CC      drivers/media/platform/mxc/capture/ipu_csi_enc.o
  CC      drivers/md/dm-builtin.o
  LD      drivers/mmc/card/mmc_block.o
  LD      drivers/mmc/card/built-in.o
  CC      drivers/mmc/core/core.o
  CC      drivers/mfd/si476x-i2c.o
  CC      drivers/md/dm-bufio.o
  CC      drivers/media/platform/mxc/capture/adv7180.o
  CC      drivers/mfd/syscon.o
  CC      drivers/media/platform/mxc/capture/ov5640.o
  CC      drivers/mfd/mxc-hdmi-core.o
drivers/mfd/mxc-hdmi-core.c: In function 'hdmi_set_cable_state':
drivers/mfd/mxc-hdmi-core.c:75:28: warning: unused variable 'substream' [-Wunused-variable]
drivers/mfd/mxc-hdmi-core.c: In function 'hdmi_set_blank_state':
drivers/mfd/mxc-hdmi-core.c:94:28: warning: unused variable 'substream' [-Wunused-variable]
  CC      drivers/mmc/core/bus.o
  CC      drivers/md/dm-crypt.o
  CC      drivers/media/platform/mxc/capture/ov5640_mipi.o
  LD      drivers/mfd/si476x-core.o
  LD      drivers/mfd/built-in.o
  CC      drivers/mmc/core/host.o
  CC      drivers/mtd/mtdcore.o
  CC      drivers/media/platform/mxc/capture/ov5642.o
  CC      drivers/mmc/core/mmc.o
  CC      drivers/md/dm-verity.o
  CC      drivers/mtd/mtdsuper.o
  CC      drivers/mtd/mtdconcat.o
  CC      drivers/media/platform/mxc/capture/v4l2-int-device.o
  LD      drivers/md/dm-mod.o
  LD      drivers/md/built-in.o
  CC      drivers/mmc/core/mmc_ops.o
  CC      drivers/mxc/gpu-viv/hal/os/linux/kernel/gc_hal_kernel_device.o
  LD      drivers/media/platform/mxc/capture/ov5640_camera_int.o
  LD      drivers/media/platform/mxc/capture/ov5642_camera.o
  LD      drivers/media/platform/mxc/capture/ov5640_camera_mipi_int.o
  LD      drivers/media/platform/mxc/capture/adv7180_tvin.o
  LD      drivers/media/platform/mxc/capture/built-in.o
  CC      drivers/mtd/mtdpart.o
  CC      drivers/media/platform/mxc/output/mxc_vout.o
  CC      drivers/mmc/core/sd.o
  CC      drivers/mxc/gpu-viv/hal/os/linux/kernel/gc_hal_kernel_linux.o
  CC      drivers/mtd/mtdchar.o
  CC      drivers/mxc/gpu-viv/hal/os/linux/kernel/gc_hal_kernel_math.o
  CC      drivers/mmc/core/sd_ops.o
  CC      drivers/mxc/gpu-viv/hal/os/linux/kernel/gc_hal_kernel_os.o
  CC      drivers/media/platform/mxc/output/mxc_pxp_v4l2.o
  CC      drivers/mmc/core/sdio.o
  CC      drivers/mtd/ofpart.o
  CC      drivers/mtd/cmdlinepart.o
  CC      drivers/mtd/mtd_blkdevs.o
  CC      drivers/mmc/core/sdio_ops.o
  LD      drivers/media/platform/mxc/output/built-in.o
  CC      drivers/media/platform/mxc/subdev/mx6s_capture.o
  CC      drivers/mmc/core/sdio_bus.o
  CC      drivers/mtd/mtdblock.o
  CC      drivers/mxc/gpu-viv/hal/os/linux/kernel/gc_hal_kernel_debugfs.o
  CC      drivers/mmc/core/sdio_cis.o
  CC      drivers/media/platform/mxc/subdev/mxc_mipi_csi.o
  CC      drivers/mtd/chips/chipreg.o
  CC      drivers/mmc/core/sdio_io.o
  CC      drivers/mxc/gpu-viv/hal/os/linux/kernel/gc_hal_kernel_allocator.o
  CC      drivers/mtd/chips/cfi_probe.o
  CC      drivers/media/platform/mxc/subdev/ov5640.o
  CC      drivers/mmc/core/sdio_irq.o
  CC      drivers/mtd/chips/cfi_util.o
  CC      drivers/mxc/gpu-viv/hal/os/linux/kernel/allocator/default/gc_hal_kernel_allocator_dmabuf.o
  CC      drivers/mmc/core/quirks.o
  CC      drivers/mmc/core/slot-gpio.o
  CC      drivers/media/platform/mxc/subdev/ov5640_mipi.o
  CC      drivers/mxc/gpu-viv/hal/os/linux/kernel/gc_hal_kernel_probe.o
  CC      drivers/mtd/chips/cfi_cmdset_0020.o
  CC      drivers/mmc/core/debugfs.o
  CC      drivers/media/platform/mxc/subdev/mxc_vadc.o
  CC      drivers/mxc/gpu-viv/hal/os/linux/kernel/platform/freescale/gc_hal_kernel_platform_imx6q14.o
  LD      drivers/mmc/core/mmc_core.o
  LD      drivers/mmc/core/built-in.o
  CC      drivers/mmc/host/sdhci.o
  LD      drivers/media/platform/mxc/subdev/ov5640_camera.o
  LD      drivers/media/platform/mxc/subdev/ov5640_camera_mipi.o
  LD      drivers/media/platform/mxc/subdev/built-in.o
  CC      drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel.o
  CC      drivers/media/platform/soc_camera/soc_camera.o
  CC      drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_command.o
  CC      drivers/mtd/chips/cfi_cmdset_0002.o
  CC      drivers/media/platform/soc_camera/soc_mediabus.o
  CC      drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_db.o
  CC      drivers/mmc/host/sdhci-pltfm.o
  CC      drivers/media/platform/soc_camera/mx3_camera.o
  CC      drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_debug.o
  CC      drivers/mmc/host/sdhci-esdhc-imx.o
  CC      drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_event.o
  LD      drivers/media/platform/soc_camera/built-in.o
  LD      drivers/media/platform/built-in.o
  CC      drivers/media/radio/radio-si476x.o
  LD      drivers/mmc/host/built-in.o
  LD      drivers/mmc/built-in.o
  CC      drivers/mxc/ipu3/ipu_common.o
  CC      drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_heap.o
  CC      drivers/mtd/chips/cfi_cmdset_0001.o
  CC      drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_mmu.o
  LD      drivers/media/radio/built-in.o
  CC      drivers/media/rc/keymaps/rc-adstech-dvb-t-pci.o
  CC      drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_video_memory.o
  CC      drivers/media/rc/keymaps/rc-alink-dtu-m.o
  CC      drivers/media/rc/keymaps/rc-anysee.o
  CC      drivers/media/rc/keymaps/rc-apac-viewcomp.o
  CC      drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_power.o
  CC      drivers/media/rc/keymaps/rc-asus-pc39.o
  CC      drivers/mxc/gpu-viv/hal/kernel/arch/gc_hal_kernel_context.o
  CC      drivers/media/rc/keymaps/rc-asus-ps3-100.o
  CC      drivers/media/rc/keymaps/rc-ati-tv-wonder-hd-600.o
  CC      drivers/media/rc/keymaps/rc-ati-x10.o
  CC      drivers/mtd/chips/gen_probe.o
  CC      drivers/media/rc/keymaps/rc-avermedia-a16d.o
  CC      drivers/mxc/gpu-viv/hal/kernel/arch/gc_hal_kernel_hardware.o
  CC      drivers/media/rc/keymaps/rc-avermedia.o
  CC      drivers/mtd/chips/jedec_probe.o
  CC      drivers/mxc/ipu3/ipu_ic.o
  CC      drivers/media/rc/keymaps/rc-avermedia-cardbus.o
  CC      drivers/media/rc/keymaps/rc-avermedia-dvbt.o
  CC      drivers/media/rc/keymaps/rc-avermedia-m135a.o
  CC      drivers/mxc/ipu3/ipu_disp.o
  LD      drivers/mtd/chips/built-in.o
  CC      drivers/mtd/devices/mtd_dataflash.o
  CC      drivers/media/rc/keymaps/rc-avermedia-m733a-rm-k6.o
  CC      drivers/media/rc/keymaps/rc-avermedia-rm-ks.o
  CC      drivers/mtd/devices/m25p80.o
  CC      drivers/media/rc/keymaps/rc-avertv-303.o
  CC      drivers/mxc/gpu-viv/hal/kernel/arch/gc_hal_kernel_recorder.o
  CC      drivers/media/rc/keymaps/rc-azurewave-ad-tu700.o
  CC      drivers/mtd/devices/sst25l.o
  CC      drivers/media/rc/keymaps/rc-behold.o
  CC      drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_vg.o
  CC      drivers/media/rc/keymaps/rc-behold-columbus.o
  CC      drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_command_vg.o
  CC      drivers/mxc/ipu3/ipu_capture.o
  LD      drivers/mtd/devices/built-in.o
  CC      drivers/media/rc/keymaps/rc-budget-ci-old.o
  LD      drivers/mtd/lpddr/built-in.o
  CC      drivers/mtd/maps/physmap_of.o
  CC      drivers/media/rc/keymaps/rc-cinergy-1400.o
  LD      drivers/mtd/maps/built-in.o
  CC      drivers/mtd/nand/nand_base.o
  CC      drivers/media/rc/keymaps/rc-cinergy.o
  CC      drivers/mxc/ipu3/ipu_device.o
  CC      drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_interrupt_vg.o
  CC      drivers/media/rc/keymaps/rc-delock-61959.o
  CC      drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_mmu_vg.o
  CC      drivers/media/rc/keymaps/rc-dib0700-nec.o
  CC      drivers/mxc/gpu-viv/hal/kernel/archvg/gc_hal_kernel_hardware_command_vg.o
  CC      drivers/media/rc/keymaps/rc-dib0700-rc5.o
  CC      drivers/mxc/gpu-viv/hal/kernel/archvg/gc_hal_kernel_hardware_vg.o
  CC      drivers/media/rc/keymaps/rc-digitalnow-tinytwin.o
  CC      drivers/media/rc/keymaps/rc-digittrade.o
  CC      drivers/mxc/gpu-viv/hal/os/linux/kernel/gc_hal_kernel_sync.o
  CC      drivers/media/rc/keymaps/rc-dm1105-nec.o
  CC      drivers/media/rc/keymaps/rc-dntv-live-dvb-t.o
  CC      drivers/mxc/gpu-viv/hal/os/linux/kernel/allocator/freescale/gc_hal_kernel_allocator_cma.o
  CC      drivers/media/rc/keymaps/rc-dntv-live-dvbt-pro.o
  CC      drivers/mtd/nand/nand_bbt.o
  LD      drivers/mxc/gpu-viv/galcore.o
  CC      drivers/media/rc/keymaps/rc-em-terratec.o
  LD      drivers/mxc/gpu-viv/built-in.o
  CC      drivers/mxc/mipi/mxc_mipi_csi2.o
  CC      drivers/mxc/ipu3/ipu_calc_stripes_sizes.o
  CC      drivers/media/rc/keymaps/rc-encore-enltv2.o
  CC      drivers/media/rc/keymaps/rc-encore-enltv.o
  CC      drivers/mxc/ipu3/vdoa.o
  LD      drivers/mxc/mipi/built-in.o
  CC      drivers/media/rc/keymaps/rc-encore-enltv-fm53.o
  CC      drivers/mtd/nand/nand_ecc.o
  CC      drivers/net/mii.o
  CC      drivers/media/rc/keymaps/rc-evga-indtube.o
  CC      drivers/mxc/ipu3/ipu_pixel_clk.o
  CC      drivers/media/rc/keymaps/rc-eztv.o
  CC      drivers/mtd/nand/nand_ids.o
  CC      drivers/media/rc/keymaps/rc-flydvb.o
  CC      drivers/mxc/ipu3/prg.o
  CC      drivers/net/Space.o
  CC      drivers/mtd/nand/mxc_nand.o
  CC      drivers/media/rc/keymaps/rc-flyvideo.o
  CC      drivers/media/rc/keymaps/rc-fusionhdtv-mce.o
  CC      drivers/net/loopback.o
  CC      drivers/mxc/ipu3/pre.o
  CC      drivers/media/rc/keymaps/rc-gadmei-rm008z.o
  CC      drivers/media/rc/keymaps/rc-genius-tvgo-a11mce.o
  CC      drivers/mtd/nand/gpmi-nand/gpmi-nand.o
  CC      drivers/net/can/dev.o
  CC      drivers/media/rc/keymaps/rc-gotview7135.o
  LD      drivers/mxc/ipu3/mxc_ipu.o
  LD      drivers/mxc/ipu3/built-in.o
  CC      drivers/media/rc/keymaps/rc-imon-mce.o
  CC      drivers/mxc/mlb/mxc_mlb.o
  CC      drivers/media/rc/keymaps/rc-imon-pad.o
  CC      drivers/media/rc/keymaps/rc-iodata-bctv7e.o
  CC      drivers/mtd/nand/gpmi-nand/gpmi-lib.o
  LD      drivers/net/can/softing/built-in.o
  LD      drivers/net/can/usb/built-in.o
  CC      drivers/media/rc/keymaps/rc-it913x-v1.o
  CC      drivers/net/can/m_can.o
  CC      drivers/media/rc/keymaps/rc-it913x-v2.o
  LD      drivers/mxc/mlb/built-in.o
  CC      drivers/mxc/sim/imx_sim.o
  CC      drivers/media/rc/keymaps/rc-kaiomy.o
  LD      drivers/mtd/nand/gpmi-nand/gpmi_nand.o
  LD      drivers/mtd/nand/gpmi-nand/built-in.o
  LD      drivers/mtd/nand/nand.o
  LD      drivers/mtd/nand/built-in.o
  LD      drivers/mtd/onenand/built-in.o
  CC      drivers/media/rc/keymaps/rc-kworld-315u.o
  CC      drivers/mtd/spi-nor/spi-nor.o
  CC      drivers/net/can/flexcan.o
  CC      drivers/media/rc/keymaps/rc-kworld-pc150u.o
  CC      drivers/media/rc/keymaps/rc-kworld-plus-tv-analog.o
  LD      drivers/mxc/sim/built-in.o
  LD      drivers/net/can/can-dev.o
  LD      drivers/net/can/built-in.o
  CC      drivers/mxc/vpu/mxc_vpu.o
  LD      drivers/net/ethernet/arc/built-in.o
  LD      drivers/net/ethernet/cadence/built-in.o
  CC      drivers/mtd/spi-nor/fsl-quadspi.o
  CC      drivers/net/ethernet/cirrus/cs89x0.o
  CC      drivers/media/rc/keymaps/rc-leadtek-y04g0051.o
  CC      drivers/media/rc/keymaps/rc-lirc.o
  LD      drivers/mtd/spi-nor/built-in.o
  CC      drivers/media/rc/keymaps/rc-lme2510.o
  LD      drivers/mtd/tests/built-in.o
  LD      drivers/mxc/vpu/built-in.o
  LD      drivers/mxc/built-in.o
  CC      drivers/mtd/ubi/vtbl.o
  CC      drivers/mtd/ubi/vmt.o
  CC      drivers/media/rc/keymaps/rc-manli.o
  LD      drivers/net/ethernet/cirrus/built-in.o
  CC      drivers/net/ethernet/smsc/smc91x.o
  CC      drivers/media/rc/keymaps/rc-medion-x10.o
  CC      drivers/media/rc/keymaps/rc-medion-x10-digitainer.o
  CC      drivers/mtd/ubi/upd.o
  CC      drivers/mtd/ubi/build.o
  CC      drivers/media/rc/keymaps/rc-medion-x10-or2x.o
  CC      drivers/media/rc/keymaps/rc-msi-digivox-ii.o
  CC      drivers/mtd/ubi/cdev.o
  CC      drivers/media/rc/keymaps/rc-msi-digivox-iii.o
  CC      drivers/mtd/ubi/kapi.o
  CC      drivers/media/rc/keymaps/rc-msi-tvanywhere.o
  CC      drivers/media/rc/keymaps/rc-msi-tvanywhere-plus.o
  CC      drivers/mtd/ubi/eba.o
  CC      drivers/net/ethernet/smsc/smc911x.o
  CC      drivers/media/rc/keymaps/rc-nebula.o
  LD      drivers/nfc/built-in.o
  CC      drivers/of/base.o
  CC      drivers/media/rc/keymaps/rc-nec-terratec-cinergy-xs.o
  CC      drivers/media/rc/keymaps/rc-norwood.o
  CC      drivers/media/rc/keymaps/rc-npgtech.o
  CC      drivers/mtd/ubi/io.o
  CC      drivers/media/rc/keymaps/rc-pctv-sedna.o
  CC      drivers/of/device.o
  CC      drivers/media/rc/keymaps/rc-pinnacle-color.o
  CC      drivers/media/rc/keymaps/rc-pinnacle-grey.o
  CC      drivers/media/rc/keymaps/rc-pinnacle-pctv-hd.o
  CC      drivers/of/platform.o
  CC      drivers/mtd/ubi/wl.o
  CC      drivers/media/rc/keymaps/rc-pixelview.o
  CC      drivers/media/rc/keymaps/rc-pixelview-mk12.o
  CC      drivers/of/fdt.o
  CC      drivers/media/rc/keymaps/rc-pixelview-002t.o
  CC      drivers/mtd/ubi/attach.o
  CC      drivers/media/rc/keymaps/rc-pixelview-new.o
  CC      drivers/media/rc/keymaps/rc-powercolor-real-angel.o
  CC      drivers/of/address.o
  CC      drivers/media/rc/keymaps/rc-proteus-2309.o
  CC      drivers/media/rc/keymaps/rc-purpletv.o
  CC      drivers/of/irq.o
  CC      drivers/mtd/ubi/misc.o
  CC      drivers/media/rc/keymaps/rc-pv951.o
  CC      drivers/media/rc/keymaps/rc-hauppauge.o
  CC      drivers/of/of_net.o
  CC      drivers/mtd/ubi/debug.o
  CC      drivers/media/rc/keymaps/rc-rc6-mce.o
  CC      drivers/media/rc/keymaps/rc-real-audio-220-32-keys.o
  LD      drivers/mtd/ubi/ubi.o
  LD      drivers/mtd/ubi/built-in.o
  CC      drivers/of/of_mdio.o
  LD      drivers/mtd/mtd.o
  CC      drivers/media/rc/keymaps/rc-reddo.o
  LD      drivers/mtd/built-in.o
  CC      drivers/pinctrl/core.o
  CC      drivers/media/rc/keymaps/rc-snapstream-firefly.o
  CC      drivers/media/rc/keymaps/rc-streamzap.o
  CC      drivers/of/of_mtd.o
  CC      drivers/net/ethernet/smsc/smsc911x.o
  CC      drivers/media/rc/keymaps/rc-tbs-nec.o
  LD      drivers/of/built-in.o
  CC      drivers/media/rc/keymaps/rc-technisat-usb2.o
  LD      drivers/platform/built-in.o
  CC      drivers/media/rc/keymaps/rc-terratec-cinergy-xs.o
  CC      drivers/media/rc/keymaps/rc-terratec-slim.o
  CC      drivers/pinctrl/pinctrl-utils.o
  CC      drivers/media/rc/keymaps/rc-terratec-slim-2.o
  CC      drivers/media/rc/keymaps/rc-tevii-nec.o
  CC      drivers/net/phy/phy.o
  CC      drivers/pinctrl/pinmux.o
  CC      drivers/media/rc/keymaps/rc-tivo.o
  CC      drivers/media/rc/keymaps/rc-total-media-in-hand.o
  CC      drivers/pinctrl/pinconf.o
  LD      drivers/net/ethernet/smsc/built-in.o
  LD      drivers/net/ethernet/via/built-in.o
  LD      drivers/net/ethernet/wiznet/built-in.o
  CC      drivers/media/rc/keymaps/rc-total-media-in-hand-02.o
  LD      drivers/net/ethernet/built-in.o
  CC      drivers/net/ppp/ppp_generic.o
  CC      drivers/media/rc/keymaps/rc-trekstor.o
  CC      drivers/pinctrl/devicetree.o
  CC      drivers/net/phy/phy_device.o
  CC      drivers/media/rc/keymaps/rc-tt-1500.o
  CC      drivers/pinctrl/pinctrl-imx.o
  CC      drivers/media/rc/keymaps/rc-twinhan1027.o
  CC      drivers/media/rc/keymaps/rc-videomate-m1f.o
  CC      drivers/pinctrl/pinctrl-imx50.o
  CC      drivers/media/rc/keymaps/rc-videomate-s350.o
  CC      drivers/pinctrl/pinctrl-imx51.o
  CC      drivers/media/rc/keymaps/rc-videomate-tv-pvr.o
  CC      drivers/net/phy/mdio_bus.o
  CC      drivers/pinctrl/pinctrl-imx53.o
  CC      drivers/net/ppp/ppp_async.o
  CC      drivers/media/rc/keymaps/rc-winfast.o
  CC      drivers/pinctrl/pinctrl-imx6q.o
  CC      drivers/media/rc/keymaps/rc-winfast-usbii-deluxe.o
  CC      drivers/pinctrl/pinctrl-imx6dl.o
  CC      drivers/media/rc/keymaps/rc-su3000.o
  CC      drivers/pinctrl/pinctrl-imx6sl.o
  CC      drivers/net/phy/micrel.o
  LD      drivers/media/rc/keymaps/built-in.o
  CC      drivers/media/rc/rc-main.o
  CC      drivers/net/ppp/bsd_comp.o
  CC      drivers/pinctrl/pinctrl-imx6sx.o
  CC      drivers/pinctrl/pinctrl-imx6ul.o
  LD      drivers/net/phy/libphy.o
  LD      drivers/net/phy/built-in.o
  CC      drivers/net/slip/slhc.o
  CC      drivers/net/ppp/ppp_deflate.o
  CC      drivers/pinctrl/pinctrl-imx7d.o
  CC      drivers/pinctrl/pinctrl-vf610.o
  CC      drivers/media/rc/ir-raw.o
  CC      drivers/net/ppp/ppp_mppe.o
  LD      drivers/pinctrl/built-in.o
  CC      drivers/power/power_supply_core.o
  CC      drivers/net/ppp/ppp_synctty.o
  CC      drivers/media/rc/ir-nec-decoder.o
  LD      drivers/net/slip/built-in.o
  CC      drivers/media/rc/ir-rc5-decoder.o
  CC      drivers/power/power_supply_sysfs.o
  CC      drivers/media/rc/ir-rc6-decoder.o
  CC      drivers/media/rc/ir-jvc-decoder.o
  CC      drivers/power/power_supply_leds.o
  CC      drivers/net/ppp/pppox.o
  LD      drivers/power/power_supply.o
  LD      drivers/power/built-in.o
  CC      drivers/net/ppp/pppoe.o
  CC      drivers/media/rc/ir-sony-decoder.o
  CC      drivers/net/usb/pegasus.o
  CC      drivers/media/rc/ir-rc5-sz-decoder.o
  CC      drivers/net/ppp/pppolac.o
  CC      drivers/media/rc/ir-sanyo-decoder.o
  CC      drivers/net/ppp/pppopns.o
  CC      drivers/net/usb/rtl8150.o
  CC      drivers/media/rc/ir-mce_kbd-decoder.o
  CC      drivers/media/rc/gpio-ir-recv.o
  LD      drivers/net/ppp/built-in.o
  LD      drivers/net/wireless/built-in.o
  LD      drivers/net/wireless/ath/built-in.o
  LD      drivers/media/rc/rc-core.o
  LD      drivers/media/rc/built-in.o
  LD      drivers/net/wireless/ath/ath6kl/built-in.o
  CC      drivers/media/tuners/tuner-xc2028.o
  CC [M]  drivers/net/wireless/ath/ath6kl/debug.o
  LD      drivers/net/wireless/bcmdhd/built-in.o
  CC [M]  drivers/net/wireless/bcmdhd/dhd_pno.o
  CC      drivers/net/usb/r8152.o
  CC [M]  drivers/net/wireless/ath/ath6kl/hif.o
  CC      drivers/media/tuners/tuner-simple.o
  CC      drivers/net/usb/asix_devices.o
  CC [M]  drivers/net/wireless/bcmdhd/dhd_common.o
  CC [M]  drivers/net/wireless/ath/ath6kl/htc_mbox.o
  CC      drivers/net/usb/asix_common.o
  CC      drivers/media/tuners/tuner-types.o
  CC      drivers/media/tuners/mt20xx.o
  CC [M]  drivers/net/wireless/bcmdhd/dhd_ip.o
  CC      drivers/net/usb/ax88172a.o
  CC [M]  drivers/net/wireless/ath/ath6kl/htc_pipe.o
  CC [M]  drivers/net/wireless/bcmdhd/dhd_custom_gpio.o
  CC      drivers/media/tuners/tda8290.o
  CC      drivers/net/usb/ax88179_178a.o
  CC [M]  drivers/net/wireless/bcmdhd/dhd_linux.o
  CC [M]  drivers/net/wireless/ath/ath6kl/bmi.o
  CC      drivers/net/usb/cdc_ether.o
  CC      drivers/media/tuners/tea5767.o
drivers/net/wireless/bcmdhd/dhd_linux.c: In function 'dhd_txcomplete':
drivers/net/wireless/bcmdhd/dhd_linux.c:2153:3: warning: ISO C90 forbids mixed declarations and code [-Wdeclaration-after-statement]
  CC [M]  drivers/net/wireless/ath/ath6kl/cfg80211.o
  CC      drivers/media/tuners/tea5761.o
  CC      drivers/net/usb/cdc_eem.o
  CC      drivers/media/tuners/tda9887.o
  CC      drivers/net/usb/net1080.o
  CC      drivers/net/usb/cdc_subset.o
  CC      drivers/media/tuners/tda827x.o
  CC      drivers/net/usb/zaurus.o
  CC [M]  drivers/net/wireless/bcmdhd/dhd_linux_sched.o
  CC [M]  drivers/net/wireless/ath/ath6kl/init.o
  CC      drivers/net/usb/usbnet.o
  CC      drivers/media/tuners/tda18271-maps.o
  CC [M]  drivers/net/wireless/bcmdhd/dhd_cfg80211.o
  CC      drivers/media/tuners/tda18271-common.o
  CC [M]  drivers/net/wireless/bcmdhd/dhd_linux_wq.o
  CC [M]  drivers/net/wireless/ath/ath6kl/main.o
  CC      drivers/media/tuners/tda18271-fe.o
  CC [M]  drivers/net/wireless/bcmdhd/aiutils.o
  CC      drivers/net/usb/cdc_ncm.o
  CC [M]  drivers/net/wireless/ath/ath6kl/txrx.o
  CC      drivers/media/tuners/xc5000.o
  CC [M]  drivers/net/wireless/bcmdhd/bcmevent.o
  LD      drivers/net/usb/asix.o
  LD      drivers/net/usb/built-in.o
  CC [M]  drivers/net/wireless/bcmdhd/bcmutils.o
  CC      drivers/media/tuners/xc4000.o
  CC [M]  drivers/net/wireless/bcmdhd/bcmwifi_channels.o
  CC [M]  drivers/net/wireless/ath/ath6kl/wmi.o
  CC [M]  drivers/net/wireless/bcmdhd/hndpmu.o
  CC      drivers/media/tuners/mc44s803.o
  CC [M]  drivers/net/wireless/bcmdhd/linux_osl.o
  CC [M]  drivers/net/wireless/bcmdhd/sbutils.o
  LD      drivers/media/tuners/tda18271.o
  LD      drivers/media/tuners/built-in.o
  LD      drivers/media/usb/b2c2/built-in.o
  LD      drivers/media/usb/dvb-usb/built-in.o
  LD      drivers/media/usb/dvb-usb-v2/built-in.o
  CC      drivers/media/usb/gspca/gspca.o
  LD      drivers/media/usb/s2255/built-in.o
  LD      drivers/media/usb/siano/built-in.o
  CC [M]  drivers/net/wireless/ath/ath6kl/core.o
  CC [M]  drivers/net/wireless/ath/ath6kl/recovery.o
  CC [M]  drivers/net/wireless/bcmdhd/siutils.o
  CC [M]  drivers/net/wireless/ath/ath6kl/sdio.o
  CC [M]  drivers/net/wireless/bcmdhd/wl_android.o
  CC      drivers/media/usb/gspca/autogain_functions.o
  LD [M]  drivers/net/wireless/ath/ath6kl/ath6kl_core.o
  LD [M]  drivers/net/wireless/ath/ath6kl/ath6kl_sdio.o
  CC [M]  drivers/net/wireless/bcmdhd/wl_cfg80211.o
  LD      drivers/media/usb/gspca/gspca_main.o
  LD      drivers/media/usb/gspca/built-in.o
  LD      drivers/media/usb/stkwebcam/built-in.o
  LD      drivers/media/usb/ttusb-budget/built-in.o
  CC      drivers/net/tun.o
  LD      drivers/media/usb/ttusb-dec/built-in.o
  CC      drivers/media/usb/uvc/uvc_driver.o
  CC [M]  drivers/net/wireless/bcmdhd/wl_cfgp2p.o
  CC      drivers/media/usb/uvc/uvc_queue.o
  CC      drivers/media/usb/uvc/uvc_v4l2.o
  CC      drivers/media/usb/uvc/uvc_video.o
  CC [M]  drivers/net/wireless/bcmdhd/wl_cfg_btcoex.o
  CC      drivers/media/usb/uvc/uvc_ctrl.o
  CC      drivers/media/usb/uvc/uvc_status.o
  CC      drivers/media/usb/uvc/uvc_isight.o
  CC      drivers/media/usb/uvc/uvc_debugfs.o
  CC [M]  drivers/net/wireless/bcmdhd/wldev_common.o
  LD      drivers/net/wireless/brcm80211/built-in.o
  LD      drivers/media/usb/uvc/uvcvideo.o
  LD      drivers/media/usb/uvc/built-in.o
  LD      drivers/net/wireless/brcm80211/brcmfmac/built-in.o
  LD      drivers/media/usb/zr364xx/built-in.o
  LD      drivers/media/usb/built-in.o
  CC [M]  drivers/net/wireless/brcm80211/brcmfmac/wl_cfg80211.o
  CC      drivers/media/v4l2-core/v4l2-dev.o
  CC      drivers/media/v4l2-core/v4l2-ioctl.o
  CC      drivers/media/v4l2-core/v4l2-device.o
  CC      drivers/media/v4l2-core/v4l2-fh.o
  CC      drivers/media/v4l2-core/v4l2-event.o
  CC [M]  drivers/net/wireless/brcm80211/brcmfmac/fwil.o
  CC      drivers/pps/pps.o
  CC [M]  drivers/net/wireless/bcmdhd/wl_linux_mon.o
  CC      drivers/media/v4l2-core/v4l2-ctrls.o
  CC [M]  drivers/net/wireless/brcm80211/brcmfmac/fweh.o
  CC      drivers/pps/kapi.o
  CC [M]  drivers/net/wireless/bcmdhd/dhd_linux_platdev.o
  CC      drivers/pps/sysfs.o
  CC [M]  drivers/net/wireless/brcm80211/brcmfmac/fwsignal.o
  LD      drivers/pps/clients/built-in.o
  LD      drivers/pps/generators/built-in.o
  LD      drivers/pps/pps_core.o
  LD      drivers/pps/built-in.o
  CC [M]  drivers/net/wireless/brcm80211/brcmfmac/p2p.o
  CC [M]  drivers/net/wireless/bcmdhd/wl_cfgvendor.o
  CC      drivers/media/v4l2-core/v4l2-subdev.o
  CC [M]  drivers/net/wireless/bcmdhd/bcmsdh.o
  CC [M]  drivers/net/wireless/brcm80211/brcmfmac/proto.o
  CC [M]  drivers/net/wireless/brcm80211/brcmfmac/bcdc.o
  CC      drivers/media/v4l2-core/v4l2-clk.o
  CC [M]  drivers/net/wireless/brcm80211/brcmfmac/dhd_common.o
  CC [M]  drivers/net/wireless/bcmdhd/bcmsdh_linux.o
  CC [M]  drivers/net/wireless/bcmdhd/bcmsdh_sdmmc.o
  CC [M]  drivers/net/wireless/brcm80211/brcmfmac/dhd_linux.o
  CC      drivers/media/v4l2-core/v4l2-async.o
  CC [M]  drivers/net/wireless/brcm80211/brcmfmac/nvram.o
  CC [M]  drivers/net/wireless/brcm80211/brcmfmac/btcoex.o
  CC [M]  drivers/net/wireless/bcmdhd/bcmsdh_sdmmc_linux.o
  CC      drivers/media/v4l2-core/v4l2-of.o
  CC [M]  drivers/net/wireless/bcmdhd/dhd_cdc.o
  CC [M]  drivers/net/wireless/brcm80211/brcmfmac/dhd_sdio.o
  CC      drivers/media/v4l2-core/v4l2-common.o
  CC [M]  drivers/net/wireless/bcmdhd/dhd_wlfc.o
  CC [M]  drivers/net/wireless/bcmdhd/dhd_sdio.o
  CC      drivers/media/v4l2-core/v4l2-dv-timings.o
  CC      drivers/media/v4l2-core/v4l2-mem2mem.o
  CC [M]  drivers/net/wireless/brcm80211/brcmfmac/bcmsdh.o
  CC      drivers/media/v4l2-core/videobuf-core.o
  LD      drivers/net/wireless/rtlwifi/built-in.o
  CC [M]  drivers/net/wireless/rtlwifi/base.o
  CC [M]  drivers/net/wireless/brcm80211/brcmfmac/sdio_chip.o
  CC      drivers/media/v4l2-core/videobuf-dma-contig.o
  LD [M]  drivers/net/wireless/brcm80211/brcmfmac/brcmfmac.o
  LD      drivers/net/wireless/brcm80211/brcmutil/built-in.o
  CC [M]  drivers/net/wireless/rtlwifi/cam.o
  CC [M]  drivers/net/wireless/brcm80211/brcmutil/utils.o
  CC      drivers/media/v4l2-core/videobuf2-core.o
  LD [M]  drivers/net/wireless/bcmdhd/bcmdhd.o
  CC [M]  drivers/net/wireless/brcm80211/brcmutil/d11.o
  CC      drivers/ptp/ptp_clock.o
  CC [M]  drivers/net/wireless/rtlwifi/core.o
  LD [M]  drivers/net/wireless/brcm80211/brcmutil/brcmutil.o
  CC [M]  drivers/net/wireless/rtlwifi/debug.o
  CC      drivers/ptp/ptp_chardev.o
  CC      drivers/media/v4l2-core/videobuf2-memops.o
  CC      drivers/ptp/ptp_sysfs.o
  CC [M]  drivers/net/wireless/rtlwifi/efuse.o
  LD      drivers/ptp/ptp.o
  LD      drivers/ptp/built-in.o
  CC      drivers/media/v4l2-core/videobuf2-vmalloc.o
  CC      drivers/pwm/core.o
  CC      drivers/media/v4l2-core/videobuf2-dma-contig.o
  CC      drivers/pwm/sysfs.o
  CC      drivers/regulator/core.o
  LD      drivers/media/v4l2-core/videodev.o
  LD      drivers/media/v4l2-core/built-in.o
  CC [M]  drivers/net/wireless/rtlwifi/ps.o
  LD      drivers/media/built-in.o
  CC      drivers/pwm/pwm-imx.o
  CC      drivers/reset/core.o
  LD      drivers/pwm/built-in.o
  CC      drivers/reset/gpio-reset.o
  CC      drivers/regulator/dummy.o
  LD      drivers/reset/built-in.o
  CC      drivers/rpmsg/virtio_rpmsg_bus.o
  CC      drivers/regulator/fixed-helper.o
  CC [M]  drivers/net/wireless/rtlwifi/rc.o
  CC      drivers/regulator/helpers.o
  LD      drivers/rpmsg/built-in.o
  CC      drivers/rtc/rtc-lib.o
  CC      drivers/regulator/devres.o
  CC [M]  drivers/net/wireless/rtlwifi/regd.o
  CC      drivers/regulator/of_regulator.o
  CC      drivers/rtc/hctosys.o
  CC      drivers/regulator/fixed.o
  CC      drivers/rtc/systohc.o
  CC [M]  drivers/net/wireless/rtlwifi/stats.o
  CC      drivers/regulator/anatop-regulator.o
  CC      drivers/rtc/class.o
  CC      drivers/regulator/da9052-regulator.o
  LD      drivers/net/wireless/rtlwifi/rtl8821as/built-in.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_cmd.o
  LD [M]  drivers/net/wireless/rtlwifi/rtlwifi.o
  CC      drivers/rtc/interface.o
  CC      drivers/scsi/scsi.o
  CC      drivers/regulator/max17135-regulator.o
  CC      drivers/rtc/rtc-dev.o
  CC      drivers/regulator/mc13783-regulator.o
  CC      drivers/scsi/hosts.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_security.o
  CC      drivers/regulator/mc13892-regulator.o
  CC      drivers/rtc/rtc-proc.o
  CC      drivers/rtc/rtc-sysfs.o
  CC      drivers/regulator/mc13xxx-regulator-core.o
  CC      drivers/scsi/scsi_ioctl.o
  CC      drivers/rtc/rtc-mxc.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_debug.o
  CC      drivers/regulator/pfuze100-regulator.o
  CC      drivers/scsi/constants.o
  CC      drivers/rtc/rtc-mc13xxx.o
  CC      drivers/rtc/rtc-snvs.o
  LD      drivers/regulator/built-in.o
  CC      drivers/spi/spi.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_io.o
  CC      drivers/scsi/scsicam.o
  LD      drivers/rtc/rtc-core.o
  LD      drivers/rtc/built-in.o
  CC      drivers/spi/spi-bitbang.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_ioctl_query.o
  CC      drivers/scsi/scsi_error.o
  CC      drivers/spi/spi-gpio.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_ioctl_set.o
  CC      drivers/spi/spi-imx.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_ieee80211.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_mlme.o
  LD      drivers/spi/built-in.o
  CC      drivers/staging/staging.o
  CC      drivers/scsi/scsi_lib.o
  CC      drivers/staging/android/ion/ion.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_mlme_ext.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_wlan_util.o
  CC      drivers/staging/android/ion/ion_heap.o
  CC      drivers/scsi/scsi_lib_dma.o
  CC      drivers/staging/android/ion/ion_page_pool.o
  CC      drivers/staging/android/ion/ion_system_heap.o
  CC      drivers/scsi/scsi_scan.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_vht.o
  CC      drivers/staging/android/ion/ion_carveout_heap.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_pwrctrl.o
  CC      drivers/staging/android/ion/ion_chunk_heap.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_rf.o
  CC      drivers/staging/android/ion/ion_cma_heap.o
  CC      drivers/scsi/scsi_sysfs.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_recv.o
  CC      drivers/staging/android/ion/mxc/mxc_ion.o
  CC      drivers/scsi/scsi_devinfo.o
  LD      drivers/staging/android/ion/mxc/built-in.o
  LD      drivers/staging/android/ion/built-in.o
  CC      drivers/staging/android/binder.o
  CC      drivers/scsi/scsi_sysctl.o
  CC      drivers/scsi/scsi_trace.o
  CC      drivers/scsi/scsi_pm.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_sta_mgt.o
  CC      drivers/scsi/sd.o
  LD      drivers/scsi/arm/built-in.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_ap.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_xmit.o
  CC      drivers/staging/android/ashmem.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_p2p.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_tdls.o
  LD      drivers/scsi/scsi_mod.o
  LD      drivers/scsi/sd_mod.o
  LD      drivers/scsi/built-in.o
  CC      drivers/switch/switch_class.o
  CC      drivers/staging/android/timed_output.o
  CC      drivers/staging/android/timed_gpio.o
  LD      drivers/switch/built-in.o
  CC      drivers/staging/android/lowmemorykiller.o
  CC      drivers/thermal/thermal_core.o
  CC      drivers/thermal/thermal_hwmon.o
  CC      drivers/thermal/of-thermal.o
  CC      drivers/staging/android/alarm-dev.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_br_ext.o
  CC      drivers/staging/android/sync.o
  CC      drivers/thermal/step_wise.o
  CC      drivers/thermal/cpu_cooling.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_iol.o
  CC      drivers/tty/tty_io.o
  LD      drivers/thermal/samsung/built-in.o
  CC      drivers/thermal/imx_thermal.o
  LD      drivers/staging/android/built-in.o
  LD      drivers/staging/iio/accel/built-in.o
  LD      drivers/staging/iio/adc/built-in.o
  LD      drivers/staging/iio/addac/built-in.o
  LD      drivers/staging/iio/cdc/built-in.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_sreset.o
  LD      drivers/staging/iio/frequency/built-in.o
  LD      drivers/staging/iio/gyro/built-in.o
  CC      drivers/thermal/device_cooling.o
  LD      drivers/staging/iio/impedance-analyzer/built-in.o
  LD      drivers/staging/iio/light/built-in.o
  LD      drivers/staging/iio/magnetometer/built-in.o
  LD      drivers/staging/iio/meter/built-in.o
  LD      drivers/staging/iio/resolver/built-in.o
  LD      drivers/staging/iio/trigger/built-in.o
  LD      drivers/staging/iio/built-in.o
  LD      drivers/thermal/thermal_sys.o
  LD      drivers/thermal/built-in.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_btcoex.o
  LD      drivers/staging/media/built-in.o
  LD      drivers/staging/built-in.o
  CC      drivers/usb/chipidea/core.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_beamforming.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_odm.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/efuse/rtw_efuse.o
  CC      drivers/tty/n_tty.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/os_dep/osdep_service.o
  CC      drivers/usb/chipidea/otg.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/os_dep/linux/os_intfs.o
  CC      drivers/usb/chipidea/udc.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/os_dep/linux/sdio_intf.o
  CC      drivers/tty/tty_ioctl.o
  CC      drivers/tty/tty_ldisc.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/os_dep/linux/sdio_ops_linux.o
  CC      drivers/usb/chipidea/host.o
  CC      drivers/tty/tty_buffer.o
  CC      drivers/usb/class/cdc-acm.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/os_dep/linux/ioctl_linux.o
  CC      drivers/usb/chipidea/otg_fsm.o
  CC      drivers/tty/tty_port.o
  LD      drivers/usb/class/built-in.o
  CC      drivers/tty/tty_mutex.o
  CC      drivers/usb/chipidea/ci_hdrc_msm.o
  CC      drivers/tty/tty_ldsem.o
  CC      drivers/usb/chipidea/ci_hdrc_zevio.o
  CC      drivers/tty/pty.o
  CC      drivers/tty/tty_audit.o
  CC      drivers/usb/chipidea/usbmisc_imx.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/os_dep/linux/xmit_linux.o
  CC      drivers/tty/sysrq.o
  LD      drivers/tty/ipwireless/built-in.o
  CC      drivers/tty/serial/serial_core.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/os_dep/linux/mlme_linux.o
  CC      drivers/usb/chipidea/ci_hdrc_imx.o
  CC      drivers/tty/vt/vt_ioctl.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/os_dep/linux/recv_linux.o
  LD      drivers/usb/chipidea/ci_hdrc.o
  LD      drivers/usb/chipidea/built-in.o
  CC      drivers/usb/common/usb-common.o
  CC      drivers/tty/serial/imx.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/os_dep/linux/ioctl_cfg80211.o
  CC      drivers/usb/common/usb-otg-fsm.o
  CC      drivers/tty/vt/vc_screen.o
  CC      drivers/tty/vt/selection.o
  CC      drivers/tty/serial/fsl_lpuart.o
  LD      drivers/usb/common/built-in.o
  CC      drivers/usb/core/usb.o
  CC      drivers/tty/vt/keyboard.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/os_dep/linux/rtw_cfgvendor.o
  LD      drivers/tty/serial/built-in.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/os_dep/linux/wifi_regd.o
  CC      drivers/usb/core/hub.o
  CC      drivers/usb/core/hcd.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/os_dep/linux/rtw_android.o
  CC      drivers/tty/vt/consolemap.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/os_dep/linux/rtw_proc.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/os_dep/linux/ioctl_mp.o
  CC      drivers/tty/vt/consolemap_deftbl.o
  CC      drivers/usb2512/usb2512.o
  CC      drivers/tty/vt/vt.o
  LD      drivers/usb2512/built-in.o
  CC      drivers/video/hdmi.o
  CC      drivers/video/fb_notify.o
  CC      drivers/usb/core/urb.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/os_dep/linux/custom_gpio_linux.o
  CC      drivers/video/fbmem.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/hal_intf.o
  CC      drivers/usb/core/message.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/hal_com.o
  CC      drivers/video/fbmon.o
  CC      drivers/tty/vt/defkeymap.o
  LD      drivers/tty/vt/built-in.o
  LD      drivers/tty/built-in.o
  CC      drivers/usb/core/driver.o
  CC      drivers/virtio/virtio.o
  CC      drivers/virtio/virtio_ring.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/hal_com_phycfg.o
  CC      drivers/video/fbcmap.o
  CC      drivers/usb/core/config.o
  LD      drivers/virtio/built-in.o
  CC      drivers/watchdog/imx2_wdt.o
  CC      drivers/video/fbsysfs.o
  CC      drivers/usb/core/file.o
  LD      drivers/watchdog/built-in.o
  CC      drivers/usb/core/buffer.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/hal_phy.o
  CC      drivers/video/modedb.o
  CC      drivers/usb/core/sysfs.o
  CC      drivers/usb/core/endpoint.o
  CC      drivers/usb/core/devio.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/hal_dm.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/hal_btcoex.o
  CC      drivers/video/fbcvt.o
  CC      drivers/video/backlight/lcd.o
In file included from drivers/net/wireless/rtlwifi/rtl8821as/hal/hal_btcoex.c:26:0:
drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/Mp_Precomp.h:69:0: warning: "RT_TRACE" redefined [enabled by default]
drivers/net/wireless/rtlwifi/rtl8821as/include/rtw_debug.h:154:0: note: this is the location of the previous definition
  CC      drivers/video/console/dummycon.o
  CC      drivers/video/console/fbcon.o
  CC      drivers/video/backlight/l4f00242t03.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/hal_mp.o
  CC      drivers/usb/core/notify.o
  CC      drivers/video/backlight/platform_lcd.o
  CC      drivers/usb/core/generic.o
  CC      drivers/video/backlight/backlight.o
  CC      drivers/usb/core/quirks.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/hal_hci/hal_sdio.o
  CC      drivers/usb/core/devices.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/led/hal_sdio_led.o
  CC      drivers/video/backlight/generic_bl.o
  CC      drivers/usb/core/port.o
  CC      drivers/video/console/bitblit.o
  LD      drivers/usb/core/usbcore.o
  CC      drivers/video/backlight/pwm_bl.o
  LD      drivers/usb/core/built-in.o
  CC      drivers/usb/gadget/udc-core.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/HalPwrSeqCmd.o
  CC      drivers/video/console/softcursor.o
  LD      drivers/video/backlight/built-in.o
  CC      drivers/video/logo/logo.o
  CC      drivers/video/logo/logo_linux_mono.o
  CC      drivers/usb/gadget/android.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/rtl8812a/Hal8812PwrSeq.o
  LD      drivers/video/console/built-in.o
  CC      drivers/video/logo/logo_linux_vga16.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/rtl8812a/Hal8821APwrSeq.o
  CC      drivers/video/logo/logo_linux_clut224.o
  LD      drivers/video/logo/built-in.o
  CC      drivers/video/mxc/ldb.o
In file included from drivers/usb/gadget/android.c:39:0:
drivers/usb/gadget/f_rndis.c: In function 'rndis_bind':
drivers/usb/gadget/f_rndis.c:674:21: warning: unused variable 'us' [-Wunused-variable]
drivers/usb/gadget/android.c: In function 'ffs_function_init':
drivers/usb/gadget/android.c:243:38: warning: assignment from incompatible pointer type [enabled by default]
drivers/usb/gadget/android.c:244:38: warning: assignment from incompatible pointer type [enabled by default]
drivers/usb/gadget/android.c: At top level:
drivers/usb/gadget/android.c:388:2: warning: initialization from incompatible pointer type [enabled by default]
drivers/usb/gadget/android.c:388:2: warning: (near initialization for 'ffs_function.unbind_config') [enabled by default]
drivers/usb/gadget/android.c: In function 'functionfs_ready_callback':
drivers/usb/gadget/android.c:406:1: warning: label 'err' defined but not used [-Wunused-label]
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/rtl8812a/rtl8812a_xmit.o
drivers/usb/gadget/android.c: At top level:
drivers/usb/gadget/f_fs.c:1310:12: warning: 'functionfs_bind_config' defined but not used [-Wunused-function]
drivers/usb/gadget/f_rndis.c:364:35: warning: 'rndis_strings' defined but not used [-Wunused-variable]
drivers/usb/gadget/android.c:933:13: warning: 'mass_storage_function_unbind_config' defined but not used [-Wunused-function]
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/rtl8812a/rtl8812a_sreset.o
  CC      drivers/video/mxc/mipi_dsi.o
  CC      drivers/video/mxc/mxcfb_hx8369_wvga.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/rtl8812a/rtl8812a_hal_init.o
  CC      drivers/video/mxc/mxc_hdmi.o
  CC      drivers/video/mxc/mxc_edid.o
In file included from drivers/usb/gadget/android.c:34:0:
drivers/usb/gadget/f_fs.c: In function 'ffs_epfile_io':
drivers/usb/gadget/f_fs.c:673:17: warning: 'data_len' may be used uninitialized in this function [-Wmaybe-uninitialized]
  CC      drivers/video/mxc/mxc_dispdrv.o
  LD      drivers/video/omap2/displays-new/built-in.o
  LD      drivers/video/omap2/built-in.o
  CC      drivers/video/cfbfillrect.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/rtl8812a/rtl8812a_phycfg.o
  CC      drivers/video/mxc/mxc_lcdif.o
  CC      drivers/video/cfbcopyarea.o
  CC      drivers/video/mxc/mxc_ipuv3_fb.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/rtl8812a/rtl8812a_rf6052.o
  CC      drivers/video/cfbimgblt.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/rtl8812a/rtl8812a_dm.o
  CC      drivers/usb/gadget/usbstring.o
  CC      drivers/usb/gadget/config.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/rtl8812a/rtl8812a_rxdesc.o
  CC      drivers/usb/gadget/epautoconf.o
  CC      drivers/video/mxc/mxc_epdc_fb.o
  CC      drivers/usb/gadget/composite.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/rtl8812a/rtl8812a_cmd.o
  CC      drivers/video/mxc/mxc_epdc_v2_fb.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/rtl8812a/sdio/sdio_halinit.o
  CC      drivers/usb/gadget/functions.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/rtl8812a/sdio/rtl8812as_led.o
  CC      drivers/usb/gadget/configfs.o
  CC      drivers/video/mxc/mxsfb_sii902x.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/rtl8812a/sdio/rtl8812as_xmit.o
  CC      drivers/video/mxc/mxc_dcic.o
  CC      drivers/video/mxc/hannstar_cabc.o
  CC      drivers/usb/gadget/u_f.o
  CC      drivers/video/fb_defio.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/rtl8812a/sdio/rtl8812as_recv.o
  LD      drivers/video/mxc/built-in.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/rtl8812a/sdio/sdio_ops.o
  CC      drivers/usb/gadget/f_acm.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/phydm_debug.o
  CC      drivers/video/mx3fb.o
  CC      drivers/usb/gadget/f_mass_storage.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/phydm_antdiv.o
  CC      drivers/usb/host/ehci-hcd.o
  CC      drivers/video/mxsfb.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/phydm_antdect.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/phydm_interface.o
  CC      drivers/video/display_timing.o
  CC      drivers/video/videomode.o
  CC      drivers/usb/gadget/storage_common.o
  CC      drivers/video/of_display_timing.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/phydm_hwconfig.o
  CC      drivers/video/of_videomode.o
  CC      drivers/usb/gadget/u_serial.o
  LD      drivers/video/fb.o
  LD      drivers/video/built-in.o
  LD      drivers/usb/gadget/usb_f_mass_storage.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/phydm.o
  CC      drivers/usb/misc/ehset.o
  LD      drivers/usb/misc/built-in.o
  CC      drivers/usb/phy/phy.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/halphyrf_ce.o
  LD      drivers/usb/gadget/g_android.o
  LD      drivers/usb/gadget/libcomposite.o
  LD      drivers/usb/gadget/usb_f_acm.o
  LD      drivers/usb/gadget/built-in.o
  CC      drivers/usb/serial/usb-serial.o
  CC      drivers/usb/phy/of.o
  CC      drivers/usb/host/ehci-mxc.o
  CC      drivers/usb/phy/otg-wakelock.o
  LD      drivers/usb/host/built-in.o
  CC      drivers/usb/phy/phy-generic.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/phydm_edcaturbocheck.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/phydm_dig.o
  CC      drivers/usb/storage/scsiglue.o
  CC      drivers/usb/phy/phy-mxs-usb.o
  CC      drivers/usb/serial/generic.o
  LD      drivers/usb/phy/built-in.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/phydm_pathdiv.o
  CC      drivers/usb/storage/protocol.o
  CC      drivers/usb/storage/transport.o
  CC      drivers/usb/serial/bus.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/phydm_rainfo.o
  CC      drivers/usb/storage/usb.o
  CC      drivers/usb/serial/ftdi_sio.o
  CC      drivers/usb/storage/initializers.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/phydm_dynamicbbpowersaving.o
  CC      drivers/usb/storage/sierra_ms.o
  CC      drivers/usb/storage/option_ms.o
  CC      drivers/usb/serial/option.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/phydm_powertracking_ce.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/phydm_dynamictxpower.o
  CC      drivers/usb/storage/usual-tables.o
  CC      drivers/usb/serial/usb_wwan.o
  LD      drivers/usb/storage/usb-storage.o
  LD      drivers/usb/storage/built-in.o
  LD      drivers/usb/serial/usbserial.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/phydm_adaptivity.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/phydm_cfotracking.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/phydm_noisemonitor.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/phydm_acs.o
  LD      drivers/usb/serial/built-in.o
  LD      drivers/usb/built-in.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8192e1Ant.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8192e2Ant.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8723b1Ant.o
In file included from drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8192e1Ant.c:14:0:
drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/Mp_Precomp.h:69:0: warning: "RT_TRACE" redefined [enabled by default]
drivers/net/wireless/rtlwifi/rtl8821as/include/rtw_debug.h:154:0: note: this is the location of the previous definition
In file included from drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8192e2Ant.c:14:0:
drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/Mp_Precomp.h:69:0: warning: "RT_TRACE" redefined [enabled by default]
drivers/net/wireless/rtlwifi/rtl8821as/include/rtw_debug.h:154:0: note: this is the location of the previous definition
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8723b2Ant.o
In file included from drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8723b1Ant.c:14:0:
drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/Mp_Precomp.h:69:0: warning: "RT_TRACE" redefined [enabled by default]
drivers/net/wireless/rtlwifi/rtl8821as/include/rtw_debug.h:154:0: note: this is the location of the previous definition
In file included from drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8723b2Ant.c:14:0:
drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/Mp_Precomp.h:69:0: warning: "RT_TRACE" redefined [enabled by default]
drivers/net/wireless/rtlwifi/rtl8821as/include/rtw_debug.h:154:0: note: this is the location of the previous definition
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8812a1Ant.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8812a2Ant.o
In file included from drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8812a1Ant.c:14:0:
drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/Mp_Precomp.h:69:0: warning: "RT_TRACE" redefined [enabled by default]
drivers/net/wireless/rtlwifi/rtl8821as/include/rtw_debug.h:154:0: note: this is the location of the previous definition
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8821a1Ant.o
In file included from drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8812a2Ant.c:15:0:
drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/Mp_Precomp.h:69:0: warning: "RT_TRACE" redefined [enabled by default]
drivers/net/wireless/rtlwifi/rtl8821as/include/rtw_debug.h:154:0: note: this is the location of the previous definition
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8821a2Ant.o
In file included from drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8821a1Ant.c:14:0:
drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/Mp_Precomp.h:69:0: warning: "RT_TRACE" redefined [enabled by default]
drivers/net/wireless/rtlwifi/rtl8821as/include/rtw_debug.h:154:0: note: this is the location of the previous definition
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8821aCsr2Ant.o
In file included from drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8821a2Ant.c:14:0:
drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/Mp_Precomp.h:69:0: warning: "RT_TRACE" redefined [enabled by default]
drivers/net/wireless/rtlwifi/rtl8821as/include/rtw_debug.h:154:0: note: this is the location of the previous definition
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8703b1Ant.o
In file included from drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8821aCsr2Ant.c:15:0:
drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/Mp_Precomp.h:69:0: warning: "RT_TRACE" redefined [enabled by default]
drivers/net/wireless/rtlwifi/rtl8821as/include/rtw_debug.h:154:0: note: this is the location of the previous definition
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8703b2Ant.o
In file included from drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8703b1Ant.c:14:0:
drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/Mp_Precomp.h:69:0: warning: "RT_TRACE" redefined [enabled by default]
drivers/net/wireless/rtlwifi/rtl8821as/include/rtw_debug.h:154:0: note: this is the location of the previous definition
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/rtl8821a/halhwimg8821a_fw.o
In file included from drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/HalBtc8703b2Ant.c:14:0:
drivers/net/wireless/rtlwifi/rtl8821as/hal/btc/Mp_Precomp.h:69:0: warning: "RT_TRACE" redefined [enabled by default]
drivers/net/wireless/rtlwifi/rtl8821as/include/rtw_debug.h:154:0: note: this is the location of the previous definition
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/rtl8821a/halhwimg8821a_mac.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/rtl8821a/halhwimg8821a_bb.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/rtl8821a/halhwimg8821a_rf.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/rtl8812a/halphyrf_8812a_ce.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/rtl8821a/halphyrf_8821a_ce.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/rtl8821a/phydm_regconfig8821a.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/rtl8821a/phydm_rtl8821a.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/hal/phydm/rtl8821a/phydm_iqk_8821a_ce.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/platform/platform_ops.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_mp.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_mp_ioctl.o
  CC [M]  drivers/net/wireless/rtlwifi/rtl8821as/core/rtw_bt_mp.o
  LD [M]  drivers/net/wireless/rtlwifi/rtl8821as/8821as.o
  LD      drivers/net/built-in.o
  LD      drivers/built-in.o
  LINK    vmlinux
  LD      vmlinux.o
  MODPOST vmlinux.o
WARNING: modpost: Found 4 section mismatch(es).
To see full details build your kernel with:
'make CONFIG_DEBUG_SECTION_MISMATCH=y'
  GEN     .version
  CHK     include/generated/compile.h
  UPD     include/generated/compile.h
  CC      init/version.o
  LD      init/built-in.o
  KSYM    .tmp_kallsyms1.o
  KSYM    .tmp_kallsyms2.o
  LD      vmlinux
  SORTEX  vmlinux
  SYSMAP  System.map
  OBJCOPY arch/arm/boot/Image
  Building modules, stage 2.
  MODPOST 10 modules
  Kernel: arch/arm/boot/Image is ready
  AS      arch/arm/boot/compressed/head.o
  LZO     arch/arm/boot/compressed/piggy.lzo
  CC      arch/arm/boot/compressed/misc.o
  CC      arch/arm/boot/compressed/decompress.o
  CC      arch/arm/boot/compressed/string.o
  AS      arch/arm/boot/compressed/hyp-stub.o
  AS      arch/arm/boot/compressed/lib1funcs.o
  AS      arch/arm/boot/compressed/ashldi3.o
  AS      arch/arm/boot/compressed/bswapsdi2.o
  CC      crypto/tcrypt.mod.o
  CC      drivers/net/wireless/ath/ath6kl/ath6kl_core.mod.o
  CC      drivers/net/wireless/ath/ath6kl/ath6kl_sdio.mod.o
  CC      drivers/net/wireless/bcmdhd/bcmdhd.mod.o
  CC      drivers/net/wireless/brcm80211/brcmfmac/brcmfmac.mod.o
  CC      drivers/net/wireless/brcm80211/brcmutil/brcmutil.mod.o
  CC      drivers/net/wireless/rtlwifi/rtl8821as/8821as.mod.o
  CC      net/mac80211/mac80211.mod.o
  CC      drivers/net/wireless/rtlwifi/rtlwifi.mod.o
  CC      net/wireless/cfg80211.mod.o
  LD [M]  crypto/tcrypt.ko
  LD [M]  drivers/net/wireless/ath/ath6kl/ath6kl_core.ko
  LD [M]  drivers/net/wireless/ath/ath6kl/ath6kl_sdio.ko
  LD [M]  drivers/net/wireless/bcmdhd/bcmdhd.ko
  LD [M]  drivers/net/wireless/brcm80211/brcmfmac/brcmfmac.ko
  LD [M]  drivers/net/wireless/brcm80211/brcmutil/brcmutil.ko
  LD [M]  drivers/net/wireless/rtlwifi/rtl8821as/8821as.ko
  LD [M]  drivers/net/wireless/rtlwifi/rtlwifi.ko
  LD [M]  net/mac80211/mac80211.ko
  LD [M]  net/wireless/cfg80211.ko
  AS      arch/arm/boot/compressed/piggy.lzo.o
  LD      arch/arm/boot/compressed/vmlinux
  OBJCOPY arch/arm/boot/zImage
  Kernel: arch/arm/boot/zImage is ready

#### make completed successfully (01:00 (mm:ss)) ####

