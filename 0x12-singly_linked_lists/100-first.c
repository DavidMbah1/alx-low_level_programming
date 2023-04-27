#include <stdio.h>

void applyy(void) __attribute__ ((constructor));

/**
 * applyy - this prints a sentence before the main
 * function is executed.
 */


void applyy(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
