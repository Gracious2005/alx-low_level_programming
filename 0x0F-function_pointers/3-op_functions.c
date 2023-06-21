#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - for the addition of two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: addition of a and b (a + b)
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - for the subtraction of two numbers
 * @a: number 1.
 * @b: number 2
 *
 * Return: subtraction of a and b (a - b)
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - for the multiplication of two numbers.
 * @a: number 1
 * @b: number 2
 *
 * Return: multiplication of a and b (a * b)
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - for the division of two numbers.
 * @a: number 1
 * @b: number 2
 *
 * Return: division of a and b (a / b)
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - for the remainder of the division of two numbers.
 * @a: number 1
 * @b: number 2
 *
 * Return: the remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
