#include "lists.h"
#include <stdlib.h>


/**
 * free_listint - function frees a listint_t list
 * @head: the head of the list
 * Return: NULL if error
 */


void free_listint(listint_t *head)
{
	listint_t *after;

	while (head != NULL)
	{
		after = head->after;
		free(head);
		head = after;
	}
}
