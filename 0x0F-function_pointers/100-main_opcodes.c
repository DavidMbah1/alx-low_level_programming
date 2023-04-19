#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - function prints the opcodes of this program
 * @a: address of the main function
 * @n: number of bytes to print
 * Return: void
 */


void print_opcodes(char *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		printf("%.2hhx", a[d]);
		if (d < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - function prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 * Return: always O
 */


int main(int argc, char **argv)
{
	int y;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	y = atoi(argv[1]);
	if (y < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, y);
	return (0);
}
