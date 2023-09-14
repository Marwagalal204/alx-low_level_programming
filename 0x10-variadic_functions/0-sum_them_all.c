#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum of ints
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list s;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(s, n);

	for (i = 0; i < n; i++)
		sum += va_arg(s, int);
	va_end(s);
	return (sum);
}
