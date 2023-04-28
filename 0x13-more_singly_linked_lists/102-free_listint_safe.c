#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _ra - function  reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 * Return: pointer to the new list
 */


listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t d;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (d = 0; d < size - 1; d++)
		newlist[d] = list[d];
	newlist[d] = new;
	free(list);
	return (newlist);
}


/**
 * free_listint_safe - funct frees a listint_t linked list.
 * @head: double pointer to the start of the list
 * Return: the number of nodes in the list
 */


size_t free_listint_safe(listint_t **head)
{
	size_t ii, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (ii = 0; ii < num; ii++)
		{
			if (*head == list[ii])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _ra(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
