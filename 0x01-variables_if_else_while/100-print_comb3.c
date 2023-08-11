#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entery point
 * Descrption - using if and else statement
 * Return: Always 0 (Success)
*/
int main(void)
{
	int c;
	int i;

	for (c = 0; c <= 8; c++)
	{
	for (i = c; i <= 9; i++)
	{
		if (c != i && i > c)
		{
		putchar(c + '0');
		putchar(i + '0');
		if (!(c == 8 && i == 9))
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
	}
	putchar('\n');
	return (0);
}
