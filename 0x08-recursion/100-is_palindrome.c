#include "main.h"

int _palindrome(char *s, int r, int l);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is empty
 * @s: string to reverse
 * Return: 1 if it is, 0 if  not
 */
int _palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_palindromel(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of string
 * @s: string to calculate for the length
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _palindrome-  Use recursion to check the characters for palindrome
 * @s: string to be checked
 * @r: iterator
 * @l: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int _palindrome(char *s, int r, int l)
{
	if (*(s + r) != *(s + l - 1))
		return (0);
	if (r >= l)
		return (1);
	return (_palindrome(s, r + 1, l - 1));
}
