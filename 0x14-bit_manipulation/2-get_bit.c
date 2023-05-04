#include "main.h"


/**
 * get_bit - this function returns the value
 * of a bit at a given index.
 * @n: this is checking bits
 * @index: index to check bit
 * Return: the value of the bit at index
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int cont, set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	cont = 1 << index;
	set = n & cont;
	if (set == cont)
		return (1);
	return (0);


}
