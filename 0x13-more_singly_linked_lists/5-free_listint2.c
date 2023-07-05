#include "lists.h"

/**
 * free_listint2 - write a function that frees a linked list
 * @head: pointer to the listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head == NULL)
		return;

	while (*head)
	{
		temporary = (*head)->next;
		free(*head);
		*head = temporary;
	}

	*head = NULL;
}

