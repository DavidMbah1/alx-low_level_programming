#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n:Number that we are returning its factorial
 * Return:int
 */

int factorial(int n)
{
	int j;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		j = n * factorial(n - 1);
	}
			return (j);

}
