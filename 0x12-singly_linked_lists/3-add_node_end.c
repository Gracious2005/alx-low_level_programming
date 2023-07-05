#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Write a function that adds a
 * new node at the end of a list_t list
 * @head: double pointer
 * @str: string
 * Return: address of new element otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

