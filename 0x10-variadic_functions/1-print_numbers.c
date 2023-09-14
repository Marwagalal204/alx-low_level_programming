#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers
 * @separator: s the string to be printed between numbers
 * @n: number of integers passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num = 0;
	va_list print;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(print, int);
		printf("%d,", num);
		
		if (num == n - 1)
		num = va_arg(print, int);
	}
	printf("\n");

	if (separator != NULL)
		printf("%c", *separator);

	va_end(print);
}
