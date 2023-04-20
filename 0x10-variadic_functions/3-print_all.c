#include "variadic_functions.h"

/**
 * print_all - function prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */


void print_all(const char * const format, ...)
{
	int i;
	int flaged;
	char *str;
	va_list my_list;

	va_start(my_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(my_list, int));
				flaged = 0;
				break;
			case 'i':
				printf("%i", va_arg(my_list, int));
				flaged = 0;
				break;
			case 'f':
				printf("%f", va_arg(my_list, double));
				flaged = 0;
				break;
			case 's':
				str = va_arg(my_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flaged = 0;
				break;
			default:
				flaged = 1;
				break;
		}
		if (format[i + 1] != '\0' && flaged == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(my_list);
}
