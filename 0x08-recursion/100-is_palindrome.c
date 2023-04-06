#include "main.h"
/**
 * _strlen_recursion - This function prints the length of a string.
 * @s: the string whose length to be printed
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}


/**
 * palin_checker - function to check if s is palindrome.
 * @s: string base address.
 * @d: left index.
 * @m: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int palin_checker(char *s, int d, int m)
{
	if (s[d] == s[m])
		if (d > m / 2)
			return (1);
		else
			return (palin_checker(s, d + 1, m - 1));
	else
		return (0);
}
/**
 * is_palindrome - function to check if s is palindrome
 * @s: this is the base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (palin_checker(s, 0, _strlen_recursion(s) - 1));
}
