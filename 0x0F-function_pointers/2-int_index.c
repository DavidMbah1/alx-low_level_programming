#include "function_pointers.h"

/**
  * int_index - return index place
  * @array: array
  * @size: size of elements in array
  * @cmp: pointer to func of one of the 3 in main
  * Return: 0
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int d = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (d < size)
			{
				if (cmp(array[d]))
					return (d);

				d++;
			}
		}
	}

	return (-1);
}
