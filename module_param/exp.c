#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include "exp.h"
static char *whom = "world";
static int howmany = 1;
module_param(howmany, int, S_IRUGO);
module_param(whom, charp, S_IRUGO);

extern void exps_init(int e);

static int table_init(void)
{
	printk("TABLE: table init \n");
    printk("the whom is %s\n", whom);
    printk("the num is %d\n", howmany);
	exps_init(50);
	return 0;
}

static void table_exit(void)
{
	printk("TABLE: table exit \n");
}

module_init(table_init);
module_exit(table_exit);

MODULE_LICENSE("GPL");

