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
	int n;
	char c;

	for (n = 0 ; n <= 9; n++)
	{
		putchar('0' + n);
	}

	for (c = 'A'; c <= 'F'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
