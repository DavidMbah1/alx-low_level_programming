#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int d, m;

	for (d = 0; d < 8; d++)
	{
		for (m = 0; m < 8; m++)
		{
			_putchar(a[d][m]);
		}
		_putchar('\n');
	}
}
