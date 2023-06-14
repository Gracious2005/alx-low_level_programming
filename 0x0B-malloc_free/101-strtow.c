#include <stdlib.h>
#include "main.h"

/**
 * count_word - count no of words in a string.
 * @s: string
 * Return: no of words, if fail NULL
 */
int count_word(char *s)
{
	int flag, j, e;

	flag = 0;
	e = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			e++;
		}
	}

	return (e);
}
/**
 * **strtow - function that splits a string into words
 * @str: string to split
 * Return: NULL on failure
 */
char **strtow(char *str)
{
	char **matrix, *temporary;
	int a, z = 0, length = 0, words, y = 0, start, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (a = 0; a <= length; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (y)
			{
				end = a;
				temporary = (char *) malloc(sizeof(char) * (y + 1));
				if (temporary == NULL)
					return (NULL);
				while (start < end)
					*temporary++ = str[start++];
				*temporary = '\0';
				matrix[z] = temporary - y;
				z++;
				y = 0;
			}
		}
		else if (y++ == 0)
			start = a;
	}

	matrix[z] = NULL;

	return (matrix);
}
