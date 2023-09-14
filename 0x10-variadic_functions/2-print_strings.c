#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
			printf("%s", va_arg(print, char*));
		else
			printf("nill");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(print);
}
