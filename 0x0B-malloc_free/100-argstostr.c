#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - function concatenates all the inputed arguments.
 * @ac: argument count
 * @av: inputed string
 * Return: NULL for filure and result for success
*/

char *argstostr(int ac, char **av)
{
	int i, j, sum = 0;
	char *res;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			sum++;
		sum++;
	}
	res = malloc((sum + 1));
	if (res == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
		res[i + j] = av[i][j];
	res[i + j] = '\n';
	}
	return (res);
}
