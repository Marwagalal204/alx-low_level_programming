#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function copies a string from location to another
 * @str: inputes str to be copied
 * Return: NULL for filure and ptr for success
*/

char *_strdup(char *str)
{
	int i = 0;
	char *new_string;

	while (str[i] != '\0')
		i++;
	new_string = malloc((i + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		new_string[i] = str[i];
		i++;
	}
	return (new_string);
}
