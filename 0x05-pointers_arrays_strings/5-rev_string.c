#include "main.h"
/**
 * rev_string - print string reversed
 * @s: input
 * Descrption: print string reversed
*/

void rev_string(char *s)
{
	int len = 0, i;
	char a, *ptr;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	s -= len;
	for (i = 0; i < 'len/2' ; i++)
	{
		a = (*s + i);
		*s = (*s + len - i);
		ptr = s + len - i;
		*ptr = a;
	}
}
