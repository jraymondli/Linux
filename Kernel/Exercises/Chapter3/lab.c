#include <linux/module.h>
#include <linux/sched.h>
#include <linux/moduleparam.h>

static int number = 100;
static char* word = "hello"; /* you can not have space there */
module_param(number, int, 0);
MODULE_PARM_DESC(number, "An integer parameter to the module.");
module_param(word, charp, 0000);
MODULE_PARM_DESC(word, "A string prameter to the module.");

int my_init_module(void) {
    printk("Running in my_init_module with %d %s.\n", number, word);
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
