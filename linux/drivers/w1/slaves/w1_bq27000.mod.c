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
	{ 0xac8a3800, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
	{ 0xe436f623, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x265f068b, __VMLINUX_SYMBOL_STR(w1_read_8) },
	{ 0x4a676414, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe8b08ac5, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0xad4f79a2, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0xc1e0eade, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0xd6bb5f1, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x39375955, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "C43296FB97348E066668D3D");
