#include <stdio.h>
#include "main.h"

/**
 * _putchar - write c to stdout
 * @c: character to be printed
 * Return: On success 1.
 * On error, return -1 and set errno appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
