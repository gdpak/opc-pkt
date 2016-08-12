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
	{ 0xb5845f5e, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xffc83a90, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x3ce8cc1a, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xcc05f130, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xcb21ed87, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x391093cf, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x29c147c1, __VMLINUX_SYMBOL_STR(__uio_register_device) },
	{ 0x156c854a, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xc1f81642, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x3e8657c5, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x1ce16c17, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x4223afe2, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xa50b574e, __VMLINUX_SYMBOL_STR(uio_unregister_device) },
	{ 0xa8c29637, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=uio";


MODULE_INFO(srcversion, "9428AB89800D782DB794538");
