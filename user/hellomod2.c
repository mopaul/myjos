#include<inc/module.h>

MODULE_VERSION("1.0")
MODULE_AUTHOR("mpaul")

int
init_module(){
	cprintf("hello word. I am a second module\n");
	return 0;
}

int
clean_module(){
	cprintf("bye world. I am a dead second module\n");
	return 0;
}
