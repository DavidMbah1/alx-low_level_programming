#include "lists.h"
#include <stdlib.h>


/**
 * delete_nodeint_at_index - func deletes the node at index
 * @head: double pointer
 * @index: index of node
 * Return: pointer to the index node
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int d;
	listint_t *temp, *after;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		after = (*head)->after;
		free(*head);
		*head = after;
		return (1);
	}
	temp = *head;
	for (d = 0; d < index - 1; d++)
	{
		if (temp->after == NULL)
			return (-1);
		temp = temp->after;
	}
	after = temp->after;
	temp->after = after->after;
	free(after);
	return (1);

}
