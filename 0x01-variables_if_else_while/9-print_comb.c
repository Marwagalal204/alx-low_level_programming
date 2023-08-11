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

	for (c = 0; c <= 9; c++)
	{
		putchar('0' + c);
		if (c != 9)
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
