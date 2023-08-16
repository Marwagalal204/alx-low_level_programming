#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: i is an integer
 * Return: integer
 */
int print_last_digit(int i)
{	int l = (i % 10);
	_putchar(l + '0');
	return (l);
}
