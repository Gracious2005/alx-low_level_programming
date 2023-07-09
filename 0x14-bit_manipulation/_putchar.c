#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes c to standard output
 * @c: Char to be printed
 *
 * Return: 1 on success
 * On error, return -1, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

