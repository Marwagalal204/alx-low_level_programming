#include "main.h"
/**
 * print_rev - print string reversed
 * @s: input
 * Descrption: print string reversed
*/

void print_rev(char *s)

{
	int i;
	char c, c1;

	for (i = 0; s[i] <= '\0'; i++)
	{
		c = s[(i / 2) + 1];
		c1 = s[(i / 2) - 1];
	}
	s[(i / 2) - 1] = c;
	_putchar(c);
	s[(i / 2) + 1] = c1;
	_putchar(c1);
}
