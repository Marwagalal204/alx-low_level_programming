#include "main.h"
/**
 * rev_string - print string reversed
 * @s: input
 * Descrption: print string reversed
*/

void rev_string(char *s)
{
	int a = 0, rev;

	while (*s != '\0')
		s++;
	rev = *s - 1;
	
	for (a = 0; a < *s; a++)
	{
		a = rev;
		rev--;
	}
}
