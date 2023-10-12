#include "main.h"
/**
 * _strlen - find the lenght of  string
 * @s: input
 * @ len: lenght of string
 * Descrption:  function that count the lenght of  string
 * Return: len of string
*/

int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
