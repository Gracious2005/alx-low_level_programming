#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program, followed  by a new line
 * @argc: no of arguments\
 * @argv: array of argument
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
