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
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xaa7ccc15, __VMLINUX_SYMBOL_STR(stmpe_reg_read) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xc685bba8, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xb76c75a0, __VMLINUX_SYMBOL_STR(stmpe_block_read) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xa06f146d, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xa0eef896, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xcacf0683, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xcca3fc38, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x301730ca, __VMLINUX_SYMBOL_STR(stmpe_reg_write) },
	{ 0xcec803f3, __VMLINUX_SYMBOL_STR(stmpe_set_bits) },
	{ 0xc388cc69, __VMLINUX_SYMBOL_STR(stmpe_enable) },
	{ 0x8e173814, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x8eba1a4c, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0xda33b9d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9ad69df8, __VMLINUX_SYMBOL_STR(platform_get_irq_byname) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xde5deefb, __VMLINUX_SYMBOL_STR(stmpe_disable) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "654BF4A88E97753488DF719");
