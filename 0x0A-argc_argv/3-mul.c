#include <stdio.h>

/**
 * main - Entery point
 * @argc: number og agumentd
 * @argv: array of argument
 * Return: 0 for success 1 for failure
 */
int main(int argc, char *argv[])
{
		int i, n, m;

		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}

		i = atoi(argv[1]);
		n = atoi(argv[2]);
		m = i * n;

		printf("%d\n", m);
		return (0);
}
