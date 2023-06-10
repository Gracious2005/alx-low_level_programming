#include "main.h"
/**
 * _strchr - entering  point
 * @s: input
 * @c: input
 * Return: 0 on Success
 */
char *_strchr(char *s, char c)
{
	int  g = 0;


	for (; s[g] >= '\0'; g++)
	{
		if (s[g] == c)
			return (&s[g]);
	}
	return (0);
}
