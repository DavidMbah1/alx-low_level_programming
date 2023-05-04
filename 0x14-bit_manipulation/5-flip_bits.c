#include "main.h"


/**
 * flip_bits - funcion that flips to get
 * from one number to another.
 * @n: this is the first number
 * @m: this is the second number
 * Return: the number of bits you would need to flip
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differ, product;
	unsigned int t, d;

	t = 0;
	product = 1;
	differ = n ^ m;
	for (d = 0; d < (sizeof(unsigned long int) * 8); d++)
	{
		if (product == (differ & product))
			t++;
		product <<= 1;
	}

	return (t);


}
