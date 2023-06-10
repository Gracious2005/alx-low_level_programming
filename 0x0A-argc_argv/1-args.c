#include <stdio.h>
#include "main.h"

/**
 * main - print no of arguments passed
 * @argc: no of argument
 * @argv: ary of arguments
 *
 * Return: 0 on success Always
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
