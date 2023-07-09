#include "main.h"

/**
 * flip_bits - writes a function that
 * counts the number of bits to change
 * to get from one number to another
 * @n: first no
 * @m: second no
 *
 * Return: no of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int v, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (v = 63; v >= 0; v--)
	{
		current = exclusive >> v;
		if (current & 1)
			count++;
	}

	return (count);
}

