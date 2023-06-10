
#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to convert
 * Return: int converted from string
 */
int _atoi(char *s)
{
	int p, j, k, size, m, digit;

	p = 0;
	j = 0;
	k = 0;
	size = 0;
	m = 0;
	digit = 0;

	while (s[size] != '\0')
		size++;

	while (p < size && m == 0)
	{
		if (s[p] == '-')
			++j;

		if (s[p] >= '0' && s[p] <= '9')
		{
			digit = s[p] - '0';
			if (j % 2)
				digit = -digit;
			k = k * 10 + digit;
			m = 1;
			if (s[p + 1] < '0' || s[p + 1] > '9')
				break;
			m = 0;
		}
		p++;
	}

	if (m == 0)
		return (0);

	return (k);
}

/**
 * main - multiplies two numbers followed by a new line
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num8, num9;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num8 = _atoi(argv[1]);
	num9 = _atoi(argv[2]);
	result = num8 * num9;

	printf("%d\n", result);

	return (0);
}
