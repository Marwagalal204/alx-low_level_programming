#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - a function that splits a string into words.
 * @str: input string
 * Return: Null for failure and splites string for sucess
*/

char **strtow(char *str)
{
	int i, n, j, word = 0, c = 0, *p;
	char **ptr;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t')
			word++;
	}
	if (word == 0)
		return (NULL);

	p = malloc(word * sizeof(int));
	if (p == NULL)
		return (NULL);

	p[c] = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			c++;
			p[c] = 0;
		}
		else
			p[c]++;
	}
	ptr = malloc(word + 1);
	if (ptr == NULL)
		return (NULL);

	for (n = 0; n < word + 1; n++)
	{
		ptr[n] = malloc(p[n] + 1);

		if (ptr == NULL)
			return (NULL);

		for (j = 0; j <= p[n] + 1; j++)
		{
			if (*str == ' ' || *str == '\t')
			{
				n++;
				break;
			}
			else
			{
				ptr[n][j] = *str;
				str++;
			}
		}
	}
	return (ptr);
}
