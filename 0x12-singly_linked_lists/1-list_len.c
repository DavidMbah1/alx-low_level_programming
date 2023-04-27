#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - func checks the code for Holberton School students.
 * @h: name of the list.
 * Return: the number of nodes.
 */


size_t list_len(const list_t *h)
{
	int counters = 0;

	while (h)
	{
		counters++;
		h = h->next;
	}
	return (counters);
}
