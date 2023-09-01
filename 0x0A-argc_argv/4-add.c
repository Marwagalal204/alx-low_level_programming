#include <stdio.h>

/**
 * _isdigit - Entery point
 * @c:cheks the digits
 * Return: 1 if true. 0 if false
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

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
	{
		return (num * sign);
	}
}

/**
 * main - adds positive numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0 - success.
*/

int main(int argc, char *argv[])
{
	int i, n, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[i][n] != '\0'; n++)
		{
			if (!_isdigit(argv[i][n]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
