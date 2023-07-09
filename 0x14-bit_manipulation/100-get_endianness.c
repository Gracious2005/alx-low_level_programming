
#include "main.h"

/**
 * get_endianness - write a function that checks if a
 * machine is little or big endian
 * Return: 0 on success (big edian) otherwise 1 (little edian)
 */
int get_endianness(void)
{
	unsigned int v = 1;
	char *c = (char *) &v;

	return (*c);
}
