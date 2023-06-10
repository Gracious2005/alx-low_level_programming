#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum no of coins to
 * make change for an amount of money
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0 on Success and 1 on Error
 */
int main(int argc, char *argv[])
{
	int value, g, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	value = atoi(argv[1]);
	result = 0;

	if (value < 0)
	{
		printf("0\n");
		return (0);
	}

	for (g = 0; g < 5 && value >= 0; g++)
	{
		while (value >= coins[g])
		{
			result++;
			value -= coins[g];
		}
	}

	printf("%d\n", result);
	return (0);
}

