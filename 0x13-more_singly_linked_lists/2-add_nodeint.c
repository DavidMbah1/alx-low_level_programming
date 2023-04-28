#include "lists.h"
#include <stdlib.h>


/**
  * add_nodeint - add node at beginning of a listint_t list.
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *point;


	if (head == NULL)
		return (NULL);
	point = malloc(sizeof(listint_t));
	if (point == NULL)
		return (NULL);
	point->n = n;
	point->next = *head;
	*head = point;
	return (point);
}
