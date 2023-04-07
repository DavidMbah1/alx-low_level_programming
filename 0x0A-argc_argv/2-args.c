#include <stdio.h>

/**
 * main - function prints all arguments it receives.
 * @argc: this the argument count
 * @argv: this is the arguments names
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;


	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
