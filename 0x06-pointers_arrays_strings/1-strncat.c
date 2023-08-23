#include "main.h"
/**
 * _strcat - fuction conctanate two strings with n value
 * @dest: sting destanation
 * @src: string to be concatanating
 * @n: length of src
 * Descrption: create  fucnction that concatanate two strings
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

