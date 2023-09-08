#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entery point
 * @argc: argument count
 * @argv: argument value
 * Return: Exit 98 for failure mul for success
*/
int main(int argc, char *argv[])
{
	unsigned long mul;
	int j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
		for (j = 0; argv[1][j] != '\0'; j++)
		{
			if (argv[1][j] > 57 || argv[1][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
			else if (argv[2][j] > 57 || argv[2][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
			else
			{
			mul += argv[1][j] * argv[2][j];
			}
		}
	printf("%lu\n", mul);
	return (0);
}
