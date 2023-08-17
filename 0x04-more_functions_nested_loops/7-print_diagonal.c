#include "main.h"

/**
 * print_diagonal - prints a line of \ n long
 * @n: length of line
 *Return: void
*/

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar('\\');
		else
			_putchar('\n');
	}
	_putchar('\n');
}
