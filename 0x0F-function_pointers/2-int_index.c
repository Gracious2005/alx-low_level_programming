#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int f;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (f = 0; f < size; f++)
	{
		if (cmp(array[f]))
			return (f);
	}
	return (-1);
}
