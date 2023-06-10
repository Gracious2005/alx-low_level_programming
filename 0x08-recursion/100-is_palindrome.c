#include "main.h"

int check_empty_string(char *s, int c, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is empty
 * @s: string to be reversed
 * Return: 1 on success, 0 on failure
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_empty_string(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length of string
 * @s: string to  be calculated
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_empty_string- Use recursion to check the characters
 * @s: string to be examined
 * @c: iterator
 * @length: length of the string
 * Return: 1 on success, 0 if not palindrome
 */
int check_empty_string(char *s, int c, int length)
{
	if (*(s + c) != *(s + length - 1))
		return (0);
	if (c >= length)
		return (1);
	return (check_empty_string(s, c + 1, length - 1));
}


