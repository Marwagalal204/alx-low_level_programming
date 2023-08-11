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

	for (c = 0; c <= 9; c++)
	{
		putchar('0' + c);
		putchar(',');
		putchar(' ');
		putchar('0');
		if (c != 9)
		{
		putchar('0' + c);
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
