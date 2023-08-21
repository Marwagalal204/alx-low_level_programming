#include "main.h"
/**
 * rev_string - print string reversed
 * @s: input
 * Descrption: print string reversed
*/

void rev_string(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
	}
	while (a <= *s)	
	{
		if (a < *s)
		_putchar(*s + 0);
		s--;
		a++;
														}
	_putchar('\n');
}
