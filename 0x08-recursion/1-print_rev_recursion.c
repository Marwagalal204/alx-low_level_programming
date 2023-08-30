#include "main.h"

/**
 * _print_rev_recursion - a function that print a string reversed
 * @s: input string to be reversed
 * Return: a reversed string
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
