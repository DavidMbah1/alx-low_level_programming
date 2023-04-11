#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **array, d, m;
	int length = width * height;

	if (length <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (d = 0; d < height; d++)
	{
		array[d] = (int *)malloc(sizeof(int) * width);
		if (array[d] == NULL)
		{
			for (d--; d >= 0; d--)
				free(array[d]);
			free(array);
			return (NULL);
		}
	}

	for (d = 0; d < height; d++)
		for (m = 0; m < width; m++)
			array[d][m] = 0;

	return (array);
}
