#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: NULL if str is 0
 */
char *_strdup(char *str)
{
	char *ddd;
	int t, q = 0;

	if (str == NULL)
		return (NULL);
	t = 0;
	while (str[t])
		t++;

	ddd = malloc(sizeof(char) * (t + 1));

	if (ddd == NULL)
		return (NULL);

	for (q = 0; str[q]; q++
	ddd[q] = str[q];

	return (ddd);
}
