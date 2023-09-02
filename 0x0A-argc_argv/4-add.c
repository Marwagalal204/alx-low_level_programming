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
	if (argc < 3)
		printf("0\n");
	return (0);
	printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
	return (0);
}
