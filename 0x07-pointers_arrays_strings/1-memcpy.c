#include "main.h"

/**
 * _memcpy - this function copies @n bytes from the memory area @src
 * to memory area @dest
 *
 * @n: imput
 *
 * @src: input
 *
 * @dest: input
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
