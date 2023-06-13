#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of character
 * @size: size of array
 * @c: character to be entered
 * Return: pointer to array or NULL on failure
 *
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int v;

	string = malloc(sizeof(char) * size);
	if (size == 0 || string == NULL)
		return (NULL);

	for (v = 0; v < size; v++)
		string[v] = c;
	return (string);
}
