/*
 * a simple kernel module: hello
 *
 * Copyright (C) 2014 Barry Song  (baohua@kernel.org)
 *
 * Licensed under GPLv2 or later.
 */

#include <linux/init.h>
#include <linux/module.h>

static int __init hello_init(void)
{
	printk(KERN_INFO "Hello World enter\n");
	return 0;
}
module_init(hello_init);

static void __exit hello_exit(void)
{
	printk(KERN_INFO "Hello World exit\n ");
}
module_exit(hello_exit);

MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("A simple Hello World Module");
MODULE_ALIAS("a simplest module");

#if 0
mykernel_scope()
{
#   kerenl的编译路径都是符号链接文件,cscope找不到。用实际所指向的路径代替
#	find  /usr/src/linux-headers-2.6.32-38-generic/include/ -maxdepth 2 -name "*.[ch]" >> cscope.files
	find  /usr/src/linux-headers-2.6.32-38/include/linux/ -maxdepth 1 -name "*.[ch]" >> cscope.files
	find . -name "*.[ch]" >> cscope.files
	cscope -bk
}

调试
make clean
make
sudo insmod hello.ko
dmesg
sudo rmmod hello
dmesg

lsmod | grep hello

找kernel的errno
ENODEV
ENOMEM

lacate linux/errno.h
加入find  /usr/src/linux-headers-2.6.32-38/include/asm-generic/ -name "*.[ch]" >> cscope.files

或找全部
 find  /usr/src/linux-headers-2.6.32-38/ -name "*.[ch]" >> cscope.files
#endif
