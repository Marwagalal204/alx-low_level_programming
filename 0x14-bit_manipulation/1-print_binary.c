#include "main.h"
/**
 * print_binary - function prints binary representation of a number
 * @n: number
 * Return: binary represntation of a number
*/
void print_binary_recursive(unsigned long int n)
{
	if (n > 1)
	{
		print_binary_recursive(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}

void print_binary(unsigned long int n)
{
	if (n == 0)
		putchar('0');
	else
		print_binary_recursive(n);
}
