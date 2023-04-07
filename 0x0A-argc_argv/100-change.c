#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints the minimum number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: arguments vector (names)
 * Return: 0
 */

int main(int argc, char **argv)
{
	int tot, count;
	unsigned int d;
	char *m;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	tot = strtol(argv[1], &m, 10);
	count = 0;

	if (!*m)
	{
		while (tot > 1)
		{
			for (d = 0; d < sizeof(cents[d]); d++)
			{
				if (tot >= cents[d])
				{
					count += tot / cents[d];
					tot = tot % cents[d];
				}
			}
		}
		if (tot == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
