#include <unistd.h> 
 
/** 
 * _putchar - write c to stdout 
 * @c:  char to print 
 * Return: On success 1. 
 * On failure, return and set errno appropriately. 
 */ 
int _putchar(char c) 
{ 
 return (write(1, &c, 1)); 
}
