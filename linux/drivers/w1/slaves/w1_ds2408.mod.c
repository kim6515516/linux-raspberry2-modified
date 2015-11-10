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
	{ 0xac8a3800, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
	{ 0xe436f623, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0x80eb4c63, __VMLINUX_SYMBOL_STR(w1_reset_bus) },
	{ 0x4a676414, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x265f068b, __VMLINUX_SYMBOL_STR(w1_read_8) },
	{ 0x39249eb4, __VMLINUX_SYMBOL_STR(w1_reset_resume_command) },
	{ 0x2c3f1f52, __VMLINUX_SYMBOL_STR(w1_write_block) },
	{ 0x11aae587, __VMLINUX_SYMBOL_STR(w1_reset_select_slave) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "907E0DD0A8DF541521497A8");
