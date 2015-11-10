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
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xb3c601ba, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xc6c1dba, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3298a7b7, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0x6035f0fa, __VMLINUX_SYMBOL_STR(of_root) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe45ffb95, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xa06f146d, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x66021e4b, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xa0eef896, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xac34b13d, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x2202fb96, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x2680e0d7, __VMLINUX_SYMBOL_STR(w1_add_master_device) },
	{ 0x93e62dd4, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x4e555e94, __VMLINUX_SYMBOL_STR(devm_gpio_request) },
	{ 0xf990fa02, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xda33b9d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xee177406, __VMLINUX_SYMBOL_STR(w1_remove_master_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x887370d, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x3fa1ba92, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";

MODULE_ALIAS("of:N*T*Cw1-gpio*");

MODULE_INFO(srcversion, "8F7F6F07E57EDD4CD8E19FB");
