#include "main.h"
/**
 *  * _strlen - find the lenght of  string
 *   * @s: input
 *    * @ len: lenght of string
 *     * Descrption:  function that count the lenght of  string
 *      * Return: len of string
 *      */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
