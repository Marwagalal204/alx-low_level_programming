#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
		if (i != 0)
		putchar(c + '0');
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
