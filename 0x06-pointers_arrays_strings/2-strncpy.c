#include "main.h"
/**
 * _strncpy - fuction copy two strings with n value
 * @dest: sting destanation
 * @src: string to be concatanating
 * @n: length of src
 * Descrption: create  fucnction that cobies two strings
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
