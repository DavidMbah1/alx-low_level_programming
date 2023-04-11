#include "main.h"
#include <stdlib.h>

/**
 * create_array - this function  creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: initial value
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int d;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (d = 0; d < size; d++)
		array[d] = c;

	return (array);
}
