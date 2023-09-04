#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function copies a string from location to another
 * @str: inputes str to be copied
 * Return: NULL for filure and ptr for success
*/

char *_strdup(char *str)
{
	int i, tall = 0;
	char *copied;

	if (*str == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		tall++;

	copied = malloc(tall + 1 * sizeof(char));

	if (copied == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)

	copied[i] = str[i];

	return (copied);
}
