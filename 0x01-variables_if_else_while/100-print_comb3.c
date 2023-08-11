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

	for (c = 0; c <= 9; c++)
	for (i = c; c <= 9; c++)
	{
		putchar('0' + c);
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
