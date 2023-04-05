
#include "main.h"

/**
 * check - function to check to see if number is a prime number
 * @d:first parameter
 * @m:second parameter
 * Return:int
 */
int check(int d, int m)
{
	if (m < 2 || m % d == 0)
		return (0);
	else if (d > m / 2)
		return (1);
	else
		return (check(d + 1, m));
}

/**
 * is_prime_number - determines if number is a prime number
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
