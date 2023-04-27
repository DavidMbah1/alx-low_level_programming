#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Function realease the memory allocated for a list
 * @head: A pointer to the first node of the list to free
 */


void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
	tmp = head;
	head = head->next;

	if (tmp->str != NULL)
	{
	free(tmp->str);
	}

	free(tmp);
	}
}
