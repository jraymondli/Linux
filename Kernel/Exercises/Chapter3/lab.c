#include <linux/module.h>
#include <linux/sched.h>

int my_init_module(void) {
    printk("Running in my_init_module.\n");
    return 0;
}

void my_cleanup_module(void) {
    printk("Running in my_cleanup_module.\n");
    return;
}

module_init(my_init_module)
module_exit(my_cleanup_module)

MODULE_AUTHOR("Ray Li");
MODULE_DESCRIPTION("Drill to get to the low lands");

