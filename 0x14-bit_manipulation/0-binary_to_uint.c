#include "main.h"

/**
 * binary_to_uint -  Write a function that converts
 * a binary number to an unsigned int
 * @b: string
 *
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int decimal_val = 0;

	if (!b)
		return (0);

	for (p = 0; b[p]; p++)
	{
		if (b[p] < '0' || b[p] > '1')
			return (0);
		decimal_val = 2 * decimal_val + (b[p] - '0');
	}

	return (decimal_val);
}
