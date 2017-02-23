/*
 * ovnet.c - Linux open vnet module
 * 
 * Copyright (c) 2017 Opclus networks Inc.
 */
#include <linux/module.h>
#include <linux/skbuff.h>
#include <linux/netdevice.h>
#include <linux/etherdevice.h>

int ovnet_open (struct net_device *dev)
{
    printk("ovnet_open called\n");
    netif_start_queue(dev);
    return 0;
}

int ovnet_release (struct net_device *dev)
{
    printk ("ovnet_release called\n");
    netif_stop_queue(dev);
    return 0;
}

static int ovnet_xmit (struct sk_buff *skb,
                       struct net_device *dev)
{
    printk ("Dummy xmit function called ..\n");
    dev_kfree_skb(skb);
    return 0;
}

static int
ovnet_set_mac_address (struct net_device *dev, void *addr)
{
    struct sockaddr *mac = addr;

    if (!is_valid_ether_addr(mac->sa_data))
        return -EADDRNOTAVAIL;
    memcpy(dev->dev_addr, mac->sa_data, ETH_ALEN);

    return 0;
}

static struct net_device_ops ovnet_dev_ops = {
    .ndo_open = ovnet_open,
    .ndo_stop = ovnet_release,
    .ndo_start_xmit = ovnet_xmit,
    .ndo_set_mac_address = ovnet_set_mac_address,
};

static int ovnet_init (struct net_device *dev)
{
    dev->netdev_ops = &ovnet_dev_ops;
    printk("ovnet device initialized\n");
    return 0;
}

struct net_device ovnet;

static int
ovnet_init_module (void)
{
    int res;

    strcpy(ovnet.name, "ovnet");
    ovnet_init (&ovnet);
    if ((res = register_netdev (&ovnet))) {
        printk ("ovnet: Error %d initialization ovnet failed", res);
        return res;
    }
    return 0;
}

static void
ovnet_cleanup (void)
{
    printk (" Cleaning Up the ovnet module\n");
    unregister_netdev(&ovnet);
    return;
}

module_init (ovnet_init_module);
module_exit (ovnet_cleanup);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Deepak Agrawal");
