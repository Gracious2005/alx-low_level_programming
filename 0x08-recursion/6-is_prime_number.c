#include "main.h"

int another_prime_number(int n, int r);

/**
 * is_prime_number - checks if an integer  prime or not
 * @n: number to be calculated
 * Return: 1 if n is a prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (another_prime_number(n, n - 1));
}

/**
 * another_prime_number - Use recursion to calculate a prime number
 * @n: number to be calculated
 * @r: iterator
 * Return: 1 if n is prime, 0 if not
 */
int another_prime_number(int n, int r)
{
	if (r == 1)
		return (1);
	if (n % r == 0 && r > 0)
		return (0);
	return (another_prime_number(n, r - 1));
}
