#include <stdlib.h>
#include "main.h"

/**
 * *array_range - funcion creates an array of integers
 * @min: min  range of values stored
 * @max: max range of values stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int d, mysize;

	if (min > max)
		return (NULL);

	mysize = max - min + 1;

	ptr = malloc(sizeof(int) * mysize);

	if (ptr == NULL)
		return (NULL);

	for (d = 0; min <= max; d++)
		ptr[d] = min++;

	return (ptr);
}
