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
	unsigned long mul = 0;

	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
