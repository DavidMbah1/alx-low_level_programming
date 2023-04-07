#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int d, m;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	d = atoi(argv[1]);
	m = atoi(argv[2]);
	printf("%d\n", d * m);

	return (0);
}
