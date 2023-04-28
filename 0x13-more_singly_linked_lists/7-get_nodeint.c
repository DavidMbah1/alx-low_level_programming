#include "lists.h"


/**
 * get_nodeint_at_index - this is nth node of a listint_t linked list.
 * @head: pointer of the first node
 * @index: index is the index of the node
 * Return: pointer of Index
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int d;

	if (head == NULL)
		return (NULL);
	for (d = 0; d < index; d++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
