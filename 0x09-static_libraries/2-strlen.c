#include "main.h"
/**
 * _strlen - return the length of  string
 * @s: string to calculate length
 * Return: length of string
 */
int _strlen(char *s)
{
	int longu = 0;


	while (*s != '\0')
	{
		longu++;
		s++;
	}


	return (longu);
}
