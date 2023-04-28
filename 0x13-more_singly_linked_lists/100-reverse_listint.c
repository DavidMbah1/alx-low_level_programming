#include "lists.h"

/**
 * reverse_listint - this is the function
 * that reverses a listint_t
 * @head: double pointer
 * Return: a pointer to the first node of the reversed list
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *after;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->after == NULL)
		return (*head);
	previous = NULL;
	while (*head != NULL)
	{
		after = (*head)->after;
		(*head)->after = previous;
		previous = *head;
		*head = after;
	}
	*head = previous;
	return (*head);
}

