#include <stdio.h>

/**
 * main - program prints the number of arguments passed
 * @argc: argument count
 * @argv: argument name
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d/n", argc -1);
	return (0);
}
