#include "main.h"
/**
 * _puts_recursion - functions to print a string following with '\n'
 * @s: input string
 * Return: string following a new line
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
