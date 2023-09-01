#include "main.h"
/**
 *  * _isalpha - Entry poin
 *   * @c: The received character
 *    * Return: 1 if true. 0 if false
 *     */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') ||  (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
