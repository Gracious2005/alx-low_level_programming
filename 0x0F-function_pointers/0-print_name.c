#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - to write a function that prints a name
 * @name: to be given
 * @f: pointer
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
