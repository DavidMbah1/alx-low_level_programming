#include "main.h"


/**
 * get_endianness - function checks the endianness
 * Return: 0 if big endian  , 1 if little endian
 */


int get_endianness(void)
{
	int j;
	char *d;

	j = 1;
	d = (char *)&j;

	return (*d);


}
