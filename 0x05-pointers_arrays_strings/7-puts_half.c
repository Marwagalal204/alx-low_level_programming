#include "main.h"
/**
 * puts_half - print half string
 * @str: inputs
 * descrption: function that print half string
*/

void puts_half(char *str)
{
	int i, count = 0;

	while (*str != '\0')
	{
		str++;
		count++;
	}
	str -= count;
	for (i = count / 2; i < count; i++)
	{
		_putchar(*str + i);
	}
	_putchar('\n');
}


