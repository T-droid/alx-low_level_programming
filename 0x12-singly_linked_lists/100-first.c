#include <stdio.h>

/**
 * myfunct - executes before the main
 */
void myfunc(void)__attribute__((constructor));
void myfunc(void)
{
	printf("You're beat! and yet, you must allow, \nI bore my house upon my back!\n");
}
