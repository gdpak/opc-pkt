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
	{ 0xcbccd081, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x634b9a3, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xc15136da, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x391093cf, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x29c147c1, __VMLINUX_SYMBOL_STR(__uio_register_device) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x9696caf7, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x9668ec0c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xdf3deb56, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x74cf6b1f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xf6a4a37b, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x713611c7, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xa50b574e, __VMLINUX_SYMBOL_STR(uio_unregister_device) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xa8c29637, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=uio";

MODULE_ALIAS("pci:v000015CFd00000000sv00000000sd00000000bc*sc*i*");
MODULE_ALIAS("pci:v000015CFd00000010sv000015CFsd00000000bc*sc*i*");
MODULE_ALIAS("pci:v000015CFd00000010sv000015CFsd00000001bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000010B5sd00003235bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000010B5sd00003335bc*sc*i*");

MODULE_INFO(srcversion, "1E4C1043EB25A9A675774D3");
