#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *news;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	news = malloc(sizeof(list_t));
	if (!news)
		return (NULL);

	news->str = strdup(str);
	news->len = len;
	news->next = NULL;

	if (*head == NULL)
	{
		*head = news;
		return (news);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = news;

	return (news);
}

