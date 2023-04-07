#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int d, m, numSum = 0;
	char *flagss;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (d = 1; argv[d]; d++)
	{
		m = strtol(argv[d], &flagss, 10);
		if (*flagss)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			numSum += m;
		}
	}
	printf("%d\n", numSum);

	return (0);
}
