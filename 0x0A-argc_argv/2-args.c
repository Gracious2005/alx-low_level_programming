#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments received
 * @argc: no of arguments
 * @argv: array of arguments
 * Return:  0 on success
 */
int main(int argc, char *argv[])
{
	int e;

	for (e = 0; e < argc; e++)
	{
		printf("%s\n", argv[e]);
	}

	return (0);
}
