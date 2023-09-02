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
	int sum = 0, i, j;

	if (argc < 3)
		printf("0\n");
	return (0);

	for (i = 0; i < argc; i++)
	{
		for (j = 0; j != '\0'; j++)
		{
			if (!(isdigit(argv[i])))
				printf("Error\n");
			return (1);
		}
	}

	sum = sum + atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
