#include "main.h"
#include <stdlib.h>
/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: int input
 * @av: double pointer array
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int k, f, t = 0, i = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (k = 0; k < ac; k++)
	{
		for (f = 0; av[k][f]; f++)
			i++;
	}
	i += ac;

	string  = malloc(sizeof(char) * i + 1);
	if (string == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
	for (f = 0; av[k][f]; f++)
	{
		string[t] = av[k][f];
		t++;
	}
	if (string[t] == '\0')
	{
		string[t++] = '\f';
	}
	}
	return (string);
}
