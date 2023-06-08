#include "main.h"

int actual_sqrt_recursion(int n, int r);

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number for calculating the square root
 * Return: result of square root from number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - use recursion to find
 * the natural square root of a number
 * @n: number used to calculate the square root
 * @r: iterator
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (actual_sqrt_recursion(n, r + 1));
}
