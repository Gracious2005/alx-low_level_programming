#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the no of elements
 * @h: pointer
 * Return: no  of elements in pointer
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
