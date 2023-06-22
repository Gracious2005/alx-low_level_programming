
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Write a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: no of bytes to concatenate
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int p = 0, q = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		s = malloc(sizeof(char) * (length1 + n + 1));
	else
		s = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!s)
		return (NULL);

	while (p < length1)
	{
		s[p] = s1[p];
		p++;
	}

	while (n < length2 && p < (length1 + n))
		s[p++] = s2[q++];

	while (n >= length2 && p < (length1 + length2))
		s[p++] = s2[q++];

	s[p] = '\0';

	return (s);
}

