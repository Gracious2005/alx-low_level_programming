#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: first input 
 * @src: second input 
 * @n: third input value
 */
char *_strncat(char *dest, char *src, int n)
{
	int e;
	int f;


	e = 0;
	while (dest[e] != '\0')
	{
		e++;
	}
	f = 0;
	while (f< n && src[f] != '\0')
	{
	dest[e] = src[f];
	e++;
	f++;
	}
	dest[e] = '\0';
	return (dest);
}
