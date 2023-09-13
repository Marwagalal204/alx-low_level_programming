#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entery point
 * @argc: argument count
 * @argv: argument value
 * Return: 0 for success and 98 for failure
*/
int main(int argc, char *argv[])
{
	int (*ops)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ops = get_op_func(argv[2]);

	if (ops == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", ops(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
