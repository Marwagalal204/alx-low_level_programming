#include <stdio.h>
#include "main.h"

/**
 * atoi - convert string to integer.
 * @s: string to be converted
 * Return: integer converted from the string
*/

int atoi(char *s)
{
	int sign = 1;

	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	}
		while (*s++);
	return (num * sign);
}

/**
 * main - Entery point
 * @argc: number og agumentd
 * @argv: array of argument
 * Return: 0 for success 1 for failure
*/

int main(int argc, char *argv[])
{
		int i, n, m;

		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}

		i = atoi(argv[1]);
		n = atoi(argv[2]);
		m = i * n;

		printf("%d\n", m);
		return (0);
}
