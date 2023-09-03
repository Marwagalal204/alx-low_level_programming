#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entery point
 * @argc: number of arguments
 * @argv: arrey of arguments
 * Return: 0 for success and 1 for failure
*/

int main(int argc, char **argv)
{
	int cents, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		if (cents >= 10)
			cents -= 10;
		if (cents >= 5)
			cents -= 5;
		if (cents >= 2)
			cents -= 2;
		if (cents >= 1)
			cents -= 1;
		count++;
	}
	printf("%d\n", count);
	return (0);
}
