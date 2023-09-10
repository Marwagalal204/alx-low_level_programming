#include "main.h"
/**
 * puts_half - print half string
 * @str: inputs
 * descrption: function that print half string
*/

void puts_half(char *str)
{
	int i, j, len = 0, len1 = 0;

	for (i = 0; str[i] != '\0'; i++)
	len = i;
	len1 = (len / 2);

	for (j = len1; j <= len - 1; j++)
		_putchar(str[j]);
}
