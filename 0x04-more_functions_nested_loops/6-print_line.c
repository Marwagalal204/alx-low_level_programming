#include "main.h"
/**
 * print_line - prints a line of _ n long
 * @n: length of line
 *Return: void
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar('_');

		else
			_putchar('\n');
	}
	_putchar('\n');
}
