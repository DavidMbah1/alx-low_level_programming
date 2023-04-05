#inlude "main.h"

/**
 * _strlen_recursion - this function prints the length of string
 * @s: string whose length should be printed
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);

	}
	return (i);
}
