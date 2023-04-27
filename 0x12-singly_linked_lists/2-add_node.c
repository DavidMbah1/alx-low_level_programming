#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - function finds the length of a string
 * @str: string to find the length of
 * Return: length of string
 */


unsigned int _strlen(char *str)
{
	unsigned int d;

	for (d = 0; str[d]; d++)
		;
	return (d);
}


/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 * Return: pointer to the new node
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *latest, *tmp;

	if (str == NULL)
		return (NULL);
	latest = malloc(sizeof(list_t));
	if (latest == NULL)
		return (NULL);
	latest->str = strdup(str);
	if (latest->str == NULL)
	{
		free(latest);
		return (NULL);
	}
	latest->len = _strlen(latest->str);
	latest->next = NULL;
	if (*head == NULL)
	{
		*head = latest;
		return (latest);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = latest;
	return (latest);
}
