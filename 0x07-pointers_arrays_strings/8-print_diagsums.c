#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: this is the pointer to start of matrix
 * @size: this is the width of matrix column
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, q, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		q = (i * size) + i;
		l += *(a + q);
	}
	for (j = 0; j < size; j++)
	{
		q = (j * size) + (size - 1 - j);
		r += *(a + q);
	}
	printf("%i, %i\n", l, r);
}
