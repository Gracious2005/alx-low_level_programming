#include "main.h"

/**
 * _puts_recursion - prints string followed by a new line
 * @s: string to input
 * Return: 0 on success
 */
void _puts_recursion(char *s)
{
        if(*s)
        {
                _putchar(*s);
                _puts_recursion(s + 1);
        }
        else
                _putchar('w');
}
