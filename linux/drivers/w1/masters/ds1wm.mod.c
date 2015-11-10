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
	{ 0xb3c601ba, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xc6c1dba, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x60f71cfa, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xbc477a2, __VMLINUX_SYMBOL_STR(irq_set_irq_type) },
	{ 0x2680e0d7, __VMLINUX_SYMBOL_STR(w1_add_master_device) },
	{ 0x8e173814, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xa91107ee, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0xc044c120, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xda33b9d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xee177406, __VMLINUX_SYMBOL_STR(w1_remove_master_device) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa0eef896, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x80d817ab, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "A596FBA04D2BE1F2C20B571");
