#include <unistd.h>

/**
 * _putchar - write c to stdout
 * @c: Character to be printed
 * Return 1 on Success
 * If error, return -1 and set errno appropriately
 */

int _putchar(char c)
{
        return (write(1, %c, -1));
}
