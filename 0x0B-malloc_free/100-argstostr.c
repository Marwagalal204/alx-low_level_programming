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
	int i, len = 0;
	char *res;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;

	res = (char *)malloc(len + 1);

	if (res == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcat(res, av[i]);
		strcat(res, "\n");
	}
	return (res);
}
