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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbff2abe1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xde98c647, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0xb995fbd9, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0xafd02d98, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x74cf6b1f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb5dcab5b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xc715d9e0, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xd1f8e25e, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x60de9b89, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x8485cc44, __VMLINUX_SYMBOL_STR(kobject_set_name) },
	{ 0xadf60b26, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x256a10b2, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x7db1ef3c, __VMLINUX_SYMBOL_STR(generic_access_phys) },
	{ 0xcb21ed87, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4bebaf06, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x59229646, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x95e27f5, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0xfbea016a, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xab03a827, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x7d52cf39, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x4fd5cfb9, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x2021c348, __VMLINUX_SYMBOL_STR(kobject_add) },
	{ 0x441c74b3, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x5e8a8764, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0xcaef1b77, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x5d595775, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x4f9aaf56, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x6f36c782, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xdf3deb56, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5860aad4, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3a8b2485, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x8897df7d, __VMLINUX_SYMBOL_STR(kobject_init) },
	{ 0x513b7e87, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xa8394c65, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0xc1f81642, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xbd318c45, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xa8c29637, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x254326c4, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F2BB0E0CDBACF3823EE4A01");
