
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Write a function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int f, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (f = 0; min <= max; f++)
		ptr[f] = min++;

	return (ptr);
}
