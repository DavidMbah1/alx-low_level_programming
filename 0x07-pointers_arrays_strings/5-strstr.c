#include "main.h"

/**
 * _strstr - it locates a substring
 * @haystack: it is the longer string to search
 * @needle: this is the first occurrence of the substring
 * Return: a pointer beginning of substring or @Null if it not foound.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int p = 0, k = 0;

	while (haystack[p])
	{
		while (needle[k] && (haystack[p] == needle[0]))
		{
			if (haystack[p + k] == needle[k])
				k++;
			else
				break;
		}
		if (needle[k])
		{
			p++;
			k = 0;
		}
		else
			return (haystack + p);
	}
	return (0);
}
