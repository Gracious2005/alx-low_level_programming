#include "main.h"

/**
 * print_binary - Write a function that prints
 * the binary representation of a number.
 * @n: number to print in 0 or 1
 */
void print_binary(unsigned long int n)
{
	int v, count = 0;
	unsigned long int current;

	for (v = 63; v >= 0; v--)
	{
		current = n >> v;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
