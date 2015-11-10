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
	{ 0x2175e1ba, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x2d6507b5, __VMLINUX_SYMBOL_STR(_find_next_zero_bit_le) },
	{ 0xec898863, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xb1f1716a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf76bd64, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xeb3f0653, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x78a0c244, __VMLINUX_SYMBOL_STR(media_device_unregister_entity) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x21f94504, __VMLINUX_SYMBOL_STR(media_entity_get) },
	{ 0x84664b6b, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xa06f146d, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xd9eddfa, __VMLINUX_SYMBOL_STR(of_prop_next_u32) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xbf1faebe, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc01a5783, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0xbdd00dd2, __VMLINUX_SYMBOL_STR(ftrace_event_buffer_commit) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x13ad79f1, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0xa0eef896, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x48a0f939, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x3a7f4621, __VMLINUX_SYMBOL_STR(i2c_verify_client) },
	{ 0xde9cf24b, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0xe0988256, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x69530207, __VMLINUX_SYMBOL_STR(device_attach) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xbe1fd1d8, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x947d704a, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x86341c5b, __VMLINUX_SYMBOL_STR(ftrace_print_flags_seq) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x4494027a, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x8a2c2992, __VMLINUX_SYMBOL_STR(media_device_register_entity) },
	{ 0x550c9ed4, __VMLINUX_SYMBOL_STR(ftrace_event_reg) },
	{ 0xa09ebf90, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x5440d09b, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xadfdfcef, __VMLINUX_SYMBOL_STR(__bitmap_andnot) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0xfa9adadd, __VMLINUX_SYMBOL_STR(media_entity_remove_links) },
	{ 0x66021e4b, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xf257e896, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebfd152, __VMLINUX_SYMBOL_STR(ftrace_event_buffer_reserve) },
	{ 0x4c7dda18, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x6ba8c6b, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x592ac733, __VMLINUX_SYMBOL_STR(media_entity_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb9891995, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0xd2691ba8, __VMLINUX_SYMBOL_STR(of_graph_parse_endpoint) },
	{ 0xd788742d, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd49d503, __VMLINUX_SYMBOL_STR(ftrace_print_symbols_seq) },
	{ 0x39cfe6c6, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3c93ea25, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x6a26591f, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x5e515be6, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0xf2fccb6d, __VMLINUX_SYMBOL_STR(ftrace_raw_output_prep) },
	{ 0xa0d38b97, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=media";


MODULE_INFO(srcversion, "46FE896466D8D8AFB93B42C");
