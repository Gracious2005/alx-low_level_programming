#include "lists.h"

/**
 * pop_listint - write a function that deletes the head node of a linked list
 * @head: pointer to the elem
 * Return: the data in elements that was deleted,
 * or 0 incase list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temporary = (*head)->next;
	free(*head);
	*head = temporary;

	return (num);
}
