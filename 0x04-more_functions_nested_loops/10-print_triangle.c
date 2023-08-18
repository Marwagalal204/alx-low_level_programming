#include "main.h"

/**
 * print_diagonal - prints a line of \ n long
 *  @n: length of line
 *   Return: void
*/

void print_triangle(int size)
{
	int space, hash;

	for (space = size; space < size; space++)


	{
		for (hash = 0; hash < space; hash++)
		_putchar(' ');
		_putchar('#');
		_putchar('\n');
		_putchar('#');	
		{
			if (size <= 0)
			_putchar('\n');
		}
	}
}
