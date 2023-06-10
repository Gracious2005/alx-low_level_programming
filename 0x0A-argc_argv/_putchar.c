#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes c to stdout
 * @c: character to be printed
 * Return: 1 on success
 * On error, return -1 and set errno appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
