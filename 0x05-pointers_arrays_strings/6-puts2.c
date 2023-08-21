#include "main.h"
/**
 * puts2 - prints every other character
 * @str: input
 * Descrption:  function tht prints every other char
*/

void puts2(char *str)
{
	int i;

	for (i = 0; i < *str; i = i + 2)
		_putchar(*str + 0);
	_putchar('\n');
}
