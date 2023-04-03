#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: this is the pointer to change
 * @to: this is the string to change pointer to
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
