#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9ed4cf12, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x45a44c24, __VMLINUX_SYMBOL_STR(v4l2_ctrl_fill) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2347e042, __VMLINUX_SYMBOL_STR(i2c_new_probed_device) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5cc08c53, __VMLINUX_SYMBOL_STR(spi_new_device) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xbe1fd1d8, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xa09ebf90, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xebcd003c, __VMLINUX_SYMBOL_STR(v4l2_device_register_subdev) },
	{ 0x39ab7685, __VMLINUX_SYMBOL_STR(v4l2_subdev_init) },
	{ 0x39cfe6c6, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5e515be6, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0xb069f013, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0xa0d38b97, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";


MODULE_INFO(srcversion, "1620D0730ABCB839C36DC92");
