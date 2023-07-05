#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add new node
 * @head: double pointer
 * @str: new string
 */
list_t *add_node(list_t **head, const char *str)
{
       list_t *new;
 unsigned int length = 0;

 while (str[length])
 length++;

 new = malloc(sizeof(list_t));
 if (!new)
 return (NULL);

 new->str = strdup(str);
 new->len = len;
 new->next = (*head);
 (*head) = new;

 return (*head);
}

