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
	int e;

	for (c = 0; c <= 7; c++)
	{
		for (i = c; i <= 8; i++)
		{
			for (e = i; e <= 9; e++)
			{
				if (c != i && i > c && i != e && e > i)
				{
					putchar(c + '0');
					putchar(i + '0');
					putchar(e + '0');
					if (!(c == 7 && i == 8 && e == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
