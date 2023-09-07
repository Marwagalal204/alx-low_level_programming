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
	int m;
	char *p;

	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}

	else
		m = atoi(argv[1]) * atoi(argv[2]);
	p = malloc(m);
	if (p == NULL)
		return (0);
	else
	printf("%d", m);
	return (0);
}
