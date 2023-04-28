#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - func  inserting a new node at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 * Return: the address of new node
 */



listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int d;
	listint_t *temp, *nw;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (d = 0; d < idx - 1 && temp != NULL; d++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}
	nw->next = temp->next;
	temp->next = nw;
	return (nw);
}
