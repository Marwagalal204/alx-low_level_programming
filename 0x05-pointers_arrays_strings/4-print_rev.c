#include "main.h"
/**
 * print_rev - print string reversed
 * @s: input
 * Descrption: print string reversed
*/

void print_rev(char *s)

{
	int a = 0;

	while (*s != '\0')
	{
		s++;
	}
	while (a <= *s)
	{
		if (a != '\0')
		_putchar(*s + 0);
		s--;
		a++;
	}
	_putchar('\n');
}
