#include "main.h"
#include <stdlib.h>

/**
 * argstostr -func concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int ii, jj, kk, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (ii = 0; ii < ac; ii++)
	{
		s = av[ii];
		jj = 0;

		while (s[jj++])
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (ii = 0, jj = 0; ii < ac && jj < len; ii++)
	{
		s = av[ii];
		kk = 0;

		while (s[kk])
		{
			str[jj] = s[kk];
			kk++;
			jj++;
		}
		str[jj++] = '\n';
	}
	str[jj] = '\0';

	return (str);
}
