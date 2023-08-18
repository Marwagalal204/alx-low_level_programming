#include "main.h"

/**
 * print_diagonal - prints a line of \ n long
 * @n: length of line
 * Return: void
*/

void print_diagonal(int n)
{
	int i, a;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			for (a = 0; a < i; a++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
		else
			_putchar('\n');
	}
}
