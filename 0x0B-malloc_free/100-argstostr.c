#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstost - function concatenates all the inputed arguments.
 * @ac: argument count
 * @av: inputed string
 * Return: NULL for filure and result for success
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av)
{
	int i, total_length = 0;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return NULL;
	}

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	result = (char *)malloc(total_length + 1);
	
	if (result == NULL)
		return NULL;

	result[0] = '\0';

	 for (i = 0; i < ac; i++)
	 {
		 strcat(result, av[i]);
		 strcat(result, "\n");
	 }
	 return (result);
}
