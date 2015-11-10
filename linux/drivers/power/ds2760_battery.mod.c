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
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xb3c601ba, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xc6c1dba, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xdc232ca3, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xf1f86221, __VMLINUX_SYMBOL_STR(power_supply_changed) },
	{ 0x6936c9d9, __VMLINUX_SYMBOL_STR(power_supply_am_i_supplied) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xa0eef896, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x7ef100da, __VMLINUX_SYMBOL_STR(power_supply_register) },
	{ 0xa3cc1725, __VMLINUX_SYMBOL_STR(w1_ds2760_recall_eeprom) },
	{ 0x5be5336e, __VMLINUX_SYMBOL_STR(w1_ds2760_store_eeprom) },
	{ 0xda33b9d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x682aef0e, __VMLINUX_SYMBOL_STR(w1_ds2760_write) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xc0fe47ac, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xe09c65b9, __VMLINUX_SYMBOL_STR(w1_ds2760_read) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xc68aa090, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x60f1283e, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=w1_ds2760";


MODULE_INFO(srcversion, "E4AE102A14FEF2497A1830F");
