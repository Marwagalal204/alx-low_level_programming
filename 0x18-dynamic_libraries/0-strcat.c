#include "main.h"

/**
 * _strcat - fuction conctanate two strings
 * @dest: sting destanation
 * @src: string to be concatanating
 * Descrption: create  fucnction that concatanate two strings
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
