#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entery point
 * @argc: number og agumentd
 * @argv: array of argument
 * Return: 0 for success 1 for failure
*/

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		                printf("Error\n");
				                exit(98);
						        }
	if (*argv[1] < 48 && *argv[1] > 57)
	{
		                printf("Error\n");
				                exit(98);
						        }
	if (*argv[2] < 48 && *argv[2] > 57)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
