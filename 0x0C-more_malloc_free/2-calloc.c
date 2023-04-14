#include "main.h"

/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 * @nmemb: allocates  memory for array
 * @size: allocates element of size bytes
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *d;
	unsigned int m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	d = malloc(nmemb * size);
	if (d == NULL)
		return (NULL);
	for (m = 0; m < (nmemb * size); m++)
		d[m] = 0;
	return (d);
}
