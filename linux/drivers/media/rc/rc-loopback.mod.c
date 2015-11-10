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
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xc445cb4c, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xbb4b8997, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0xf88a9a93, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xa931fd8c, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x30ee8ab5, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0xb7ad1329, __VMLINUX_SYMBOL_STR(ir_raw_event_store_with_filter) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";


MODULE_INFO(srcversion, "5D91AC996E8D09EB9DB224A");
