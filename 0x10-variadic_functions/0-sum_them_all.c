#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 * @n: no of parameters
 * @...: number available to calculate addition for
 * Return:0  If n == 0, if not the addition of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int f, sum = 0;

	va_start(ap, n);

	for (f = 0; f < n; f++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
