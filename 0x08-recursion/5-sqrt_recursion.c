
#include "main.h"

/**
 * check - this function checks for the square root
 * @d:first parameter(int)
 * @m:second parameter(int)
 * Return: int
 */
int check(int d, int m)
{
	if (d * d == m)
		return (d);
	if (d * d > m)
		return (-1);
	return (check(d + 1, m));
}

/**
 * _sqrt_recursion - this function returns the natural square root of a number
 * @n: integer to find square root of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
