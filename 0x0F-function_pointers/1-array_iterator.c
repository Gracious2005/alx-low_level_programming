#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - execute a function given as a
 * parameter on each element
 * of an array.
 * @array: array
 * @size: size of array
 * @action:  pointer to the function  to be  used
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int f;

	if (array == NULL || action == NULL)
		return;

	for (f = 0; f < size; f++)
	{
		action(array[f]);
	}
}


