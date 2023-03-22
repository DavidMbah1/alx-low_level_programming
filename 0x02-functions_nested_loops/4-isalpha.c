#include "main.h"

/**
 *  _isalpha - checks for alphabetic character
 *  @c: The char to be checked
 *  Return: 1 If c is a letter, lowercase or uppercase, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1)
	else
		return (0);
}
