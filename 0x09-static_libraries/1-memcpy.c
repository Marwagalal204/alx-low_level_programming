#include "main.h"

/**
 *  * _memcpy - function copies n bytes from memory area  to other memory area
 *   * @dest: pointer to copied in
 *    * @src: pointer to copied from
 *     * @n: length of bytes to be copied
 *      * Return: Always dest
 *      */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
