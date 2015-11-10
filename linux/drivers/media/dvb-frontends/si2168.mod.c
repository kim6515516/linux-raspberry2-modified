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
	{ 0xc0fe47ac, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1c2b2b35, __VMLINUX_SYMBOL_STR(__i2c_transfer) },
	{ 0xb1f1716a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x283bfe09, __VMLINUX_SYMBOL_STR(i2c_add_mux_adapter) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf257e896, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdc232ca3, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x1505976e, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xee8ef220, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xf990fa02, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xa0eef896, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4f70ce23, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x76af6e45, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5693d542, __VMLINUX_SYMBOL_STR(i2c_del_mux_adapter) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-mux";

MODULE_ALIAS("i2c:si2168");

MODULE_INFO(srcversion, "CD18A4DE62C1524D60536D1");
