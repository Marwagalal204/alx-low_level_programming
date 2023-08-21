#include "main.h"
/**
 * print_rev - print string reversed
 * @s: input
 * Descrption: print string reversed
*/

void print_rev(char *s)

{
	int count = 0, a = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	while (a <= count)
	{
		_putchar(*s + 0);
		s--;
		a++;
	}
	_putchar('\n');
}
