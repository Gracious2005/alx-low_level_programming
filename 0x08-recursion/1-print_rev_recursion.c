#include "main.h"

/**
 * _print_rev_recursion - String to be printed in reverse
 * @s:  string to print.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
