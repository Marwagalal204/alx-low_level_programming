#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0 - success.
*/

int main(int argc, char *argv[])
{
	int i, n;

	if (argc < 1)
		printf("0\n");
	return (0);

	for (i = 0; i < argc; i++)
	{
		for (n = 0; argv[i][n] != '\0'; n++)
		{
			if (!(isdigit(argv[i][n])))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
	return (0);
}
