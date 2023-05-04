#include "main.h"


/**
 * _power - function calculate base and power.
 * @base: this is the base of the exponet
 * @pow: this is the power of the exponet
 * Return: value of base and power
 */


unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num1;
	unsigned int d;

	num1 = 1;
	for (d = 1; d <= pow; d++)
		num1 *= base;
	return (num1);

}


/**
 * print_binary - function prints the binary representation of a number
 * @n: this is the num of prented
 * Return: void
 */


void print_binary(unsigned long int n)
{
	unsigned long int develop, results;
	char flags;

	flags = 0;
	develop = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (develop != 0)
	{
		results = n & develop;
		if (results == develop)
		{
			flags = 1;
			_putchar('1');

		}
		else if (flags == 1 || develop == 1)
		{
			_putchar('0');
		}
		develop >>= 1;
	}
}
