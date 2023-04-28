#include "lists.h"

/**
 * sum_listint - this is the sum of all the data 
 * (n) of a listint_t linked list.
 * @head: pointer to the first node
 * Return: sum all the data
 */


int sum_listint(listint_t *head)
{
	int merge = 0;

	while (head != NULL)
	{
		merge += head->n;
		head = head->next;
	}
	return (merge);
}
