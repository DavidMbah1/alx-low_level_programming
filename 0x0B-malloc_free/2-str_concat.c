#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int d, m, leng1, leng2, leng;
	char *result;

	leng1 = leng2 = 0;

	if (s1 != NULL)
	{
		d = 0;
		while (s1[d++] != '\0')
			leng1++;
	}

	if (s2 != NULL)
	{
		d = 0;
		while (s2[d++] != '\0')
			leng2++;
	}

	leng = leng1 + leng2;
	result = (char *)malloc(sizeof(char) * (leng + 1));
	if (result == NULL)
		return (NULL);

	for (d = 0; d < leng1; d++)
		result[d] = s1[d];
	for (m = 0; m < leng2; m++, d++)
		result[d] = s2[m];
	result[leng] = '\0';

	return (result);
}
