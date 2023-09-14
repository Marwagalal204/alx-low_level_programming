#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - a function that prints anything.
 * @format: is a list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{

	unsigned int i = 0;
	char *s;
	va_list printa;

	va_start(printa, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case ('c'):
				printf("%c", va_arg(printa, int));
				break;
			case ('i'):
				printf("%i", va_arg(printa, int));
				break;
			case ('f'):
				printf("%f", va_arg(printa, double));
				break;
			case ('s'):
			s = va_arg(printa, char*);
				if (s == NULL)
				printf( "(nil)");
				printf("%s", s);
				break;
			default:
				break;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(printa);
}
