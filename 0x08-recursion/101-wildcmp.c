#include "main.h"

/**
 * strng_checker -function to check if two strings are identical.
 * @s1: string_1 base address.
 * @s2: string_2 base address.
 * @d: left index.
 * @m: special index. (joker)
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int strng_checker(char *s1, char *s2, int d, int m)
{
	if (s1[d] == '\0' && s2[m] == '\0')
		return (1);
	if (s1[d] == s2[m])
		return (strng_checker(s1, s2, d + 1, m + 1));
	if (s1[d] == '\0' && s2[m] == '*')
		return (strng_checker(s1, s2, d, m + 1));
	if (s2[m] == '*')
		return (strng_checker(s1, s2, d + 1, m) || strng_checker(s1, s2, d, m + 1));
	return (0);
}
/**
 * wildcmp - function to check if strings could be considered identical
 * @s1: this is base address for string.
 * @s2: this is base address for string.
 *
 * Return: 1 if both base addresses are considered identical.
 */
int wildcmp(char *s1, char *s2)
{
	return (strng_checker(s1, s2, 0, 0));
}
