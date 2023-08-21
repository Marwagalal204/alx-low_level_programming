#include "main.h"

/**
 * _strcpy - copies a string from one pointer to another.
 * @src: input.
 * @dest: input.
 * Return: function copies a string .
*/

char *_strcpy(char *dest, char *src)
{
	int n, i = 0;
	
	for (n = 0; *src != '\0'; n++)
	{
		dest[i] = src[n];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
