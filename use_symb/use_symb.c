#include <linux/init.h>
#include <linux/module.h>

extern int add_integar(int a, int b);
extern int sub_integar(int a, int b);

static int __init hello_init(void)
{
	int a=3, b=4;
	int c=8;
	
	c = add_integar(a, b);

	printk(KERN_INFO "Hello world in %d\n", c);

	return 0;
}
module_init(hello_init);

static void __exit hello_exit(void)
{
	int a=3, b=4;
	int c=9;

	c = sub_integar(a, b);

	printk(KERN_INFO "Hello world out %d\n", c);
	
}
module_exit(hello_exit);


MODULE_LICENSE("GPL v2");
