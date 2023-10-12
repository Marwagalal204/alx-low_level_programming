#include "main.h"
#include <stdlib.h>
/**
 * _strcpy - copies a string from one pointer to another.
 * @src: string to be copied.
 * @dest: string to copy to..
 * Return: destination .
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
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

	_strcpy(new_string, str);

	return (new_string);
	free(new_string);
}
