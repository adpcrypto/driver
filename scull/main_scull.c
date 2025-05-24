#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

static int __init init_fn(void){
	printk(KERN_ALERT "Hello\n");
	return 0;
}

static void __exit exit_fn(void){
	printk(KERN_ALERT "Bye\n");
}

module_init(init_fn);
module_exit(exit_fn);
