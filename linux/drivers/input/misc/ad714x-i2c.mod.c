#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9ed4cf12, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6103088d, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x898be573, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x4f70ce23, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0xa0eef896, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x76af6e45, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x56aed031, __VMLINUX_SYMBOL_STR(ad714x_probe) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5422badd, __VMLINUX_SYMBOL_STR(ad714x_remove) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ad714x";

MODULE_ALIAS("i2c:ad7142_captouch");
MODULE_ALIAS("i2c:ad7143_captouch");
MODULE_ALIAS("i2c:ad7147_captouch");
MODULE_ALIAS("i2c:ad7147a_captouch");
MODULE_ALIAS("i2c:ad7148_captouch");

MODULE_INFO(srcversion, "30891EAA9761760A7245110");
