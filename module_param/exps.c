#include "exp.h"
#include <linux/kernel.h>

void print(int e)
{
	printk("parameter is %d \n",e);
}

void exps_init(int e)
{
	printk("hello, this is exps \n");
	print(e);
}

