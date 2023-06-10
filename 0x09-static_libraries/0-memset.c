#include "main.h"
/**
 * _memset - fill a memory block with a particular value
 * @s: memory address to be filled
 * @b: value
 * @n: no of bytes to change
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;


	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
