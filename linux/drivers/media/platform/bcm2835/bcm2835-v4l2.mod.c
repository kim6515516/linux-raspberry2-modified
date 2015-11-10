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
	{ 0x61ca1df1, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb1f1716a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x990bc292, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x60c331c8, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9dbaa9ad, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x686df339, __VMLINUX_SYMBOL_STR(vchi_initialise) },
	{ 0x3af690be, __VMLINUX_SYMBOL_STR(vchi_service_open) },
	{ 0x6984fb25, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x8cc1e73b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xf30afd02, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x4f52191d, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x8e0f1df8, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2a3492ba, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x974501cf, __VMLINUX_SYMBOL_STR(vchi_msg_hold) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x73be3770, __VMLINUX_SYMBOL_STR(vchi_service_use) },
	{ 0x1b56e3a5, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xc716b165, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd5d1568, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5dddc391, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0xa3622515, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x7c2408c0, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x48a0f939, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x44e4c065, __VMLINUX_SYMBOL_STR(vchi_held_msg_release) },
	{ 0x1ba43147, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x5a753c70, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x27352e7, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x74ef63cb, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x69fcac11, __VMLINUX_SYMBOL_STR(vchi_connect) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcca0d36f, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0xc5a45f20, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xbc78aba5, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x48244456, __VMLINUX_SYMBOL_STR(vchi_service_close) },
	{ 0xf97ee4a, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_int_menu) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0x73ed3550, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0xd1d503ca, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x9b66b765, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0x59d29dab, __VMLINUX_SYMBOL_STR(v7_flush_kern_dcache_area) },
	{ 0x2394bc74, __VMLINUX_SYMBOL_STR(vchi_service_release) },
	{ 0xf257e896, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x84031b71, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x4f09694e, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x649dace1, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xd13b4d69, __VMLINUX_SYMBOL_STR(vchi_msg_queue) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x60f71cfa, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xef6cc846, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x4e9a9f81, __VMLINUX_SYMBOL_STR(vchi_bulk_queue_receive) },
	{ 0x80d817ab, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xacbf46f5, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x923809ea, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,videodev,videobuf2-vmalloc,v4l2-common";


MODULE_INFO(srcversion, "A53F05DC7F5805EF1F9152C");
