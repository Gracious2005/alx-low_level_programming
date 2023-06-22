#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with byte
 * @s: memory area
 * @b: character
 * @n: how many times to copy character
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int f;

	for (f = 0; f < n; f++)
	{
		s[f] = b;
	}

	return (s);
}

/**
* _calloc - Write a function that allocates memory for an array, using malloc
 * @nmemb: no of elements
 * @size: size
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
