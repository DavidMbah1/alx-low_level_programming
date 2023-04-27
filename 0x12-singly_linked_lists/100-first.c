#include<stdio.h>

/**
 * myStartupFun - func applies the constructor attribute to myStartupFun()
 *  so that it is executed before main()
 */


void myStartupFun(void) __attribute__ ((constructor));



/**
 * myStartupFun - this function implements myStartupFun
 */


void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");

	printf("I bore my house upon my back!\n");
}
