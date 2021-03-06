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
	{ 0x26fdb06f, __VMLINUX_SYMBOL_STR(input_mt_report_pointer_emulation) },
	{ 0x30d71b26, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0xc685bba8, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x4f70ce23, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa0eef896, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xcacf0683, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x8e173814, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xd3e18ff5, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0xcca3fc38, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x76af6e45, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x93e62dd4, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x887370d, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x2202fb96, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x3fa1ba92, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0xe45ffb95, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x8eba1a4c, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0xda33b9d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:egalax_ts");

MODULE_INFO(srcversion, "BAD8E1EC967FC00128FBAD1");
