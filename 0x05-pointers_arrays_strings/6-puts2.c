#include "main.h"
/**
 * puts2 - prints every other character
 * @str: input
 * Descrption:  function tht prints every other char
*/

void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str + i);
		str = str + 2;
	}
	_putchar('\n');
}
