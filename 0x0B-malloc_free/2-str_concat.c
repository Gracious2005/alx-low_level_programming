#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first input value
 * @s2: second input value
 * Return: NULL on failure, empty string on success
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int w, cw;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	w = cw = 0;
	while (s1[w] != '\0')
		w++;
	while (s2[cw] != '\0')
		cw++;
	conct = malloc(sizeof(char) * (w + cw + 1));

	if (conct == NULL)
		return (NULL);
	w = cw = 0;
	while (s1[w] != '\0')
	{
		conct[w] = s1[w];
		w++;
	}

	while (s2[cw] != '\0')
	{
		conct[w] = s2[cw];
		w++, cw++;
	}
	conct[w] = '\0';
	return (conct);
}

