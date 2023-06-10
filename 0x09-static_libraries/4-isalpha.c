#include "main.h"
		
/**
 * _isalpha - check for alphabetical char
 * @c: char to be check
 * Return: 1  on success, 0 on failure
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
