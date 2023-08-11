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
	char c;

	c = 97;
	while (c < 123)
	{
		printf("%c", c);
		c = c + 1;
	}

	return (0);
}
