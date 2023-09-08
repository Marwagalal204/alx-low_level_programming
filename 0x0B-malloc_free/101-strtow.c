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
	int i, n, j, word = 0, c = 0, len = 0;
	char **ptr;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t')
			word++;
	}
	if (word == 0)
		return (NULL);

	ptr = malloc(word + 1);
	if (ptr == NULL)
		return (NULL);

	for (n = 0; n < word + 1; n++)
	{
		for (j = len; str[j] != ' ' && str[j] != '\t'; j++)
			;
		ptr[n] = malloc(j - len + 1);
		if (ptr == NULL)
			return (NULL);
		for (c = len; c  < j; c++)
		{
			if (str[c] == ' ' || str[c] == '\t')
			{
				break;
			}
			else
			{
				ptr[n][c-len] = str[c];
			}
		}
	}
	return (ptr);
}
