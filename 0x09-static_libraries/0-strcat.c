#include "main.h"
 /**
 * _strcat - concatenates two strings
 * @dest: first input figure
 * @src: second input figure	
 */
char *_strcat(char *dest, char *src)
{
	int r;
	int s;


	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[r] = src[s];
		r++;
		s++;
	}		


	dest[r] = '\0';
	return (dest);
}
