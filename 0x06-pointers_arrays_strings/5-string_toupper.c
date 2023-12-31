#include "main.h"
/**
 * string_toupper - This function will replace all lowercase letters in
 * the string pointed by str to uppercase
 * @str: The string that will be checked for lowercase letters
 *
 * Return: The resulting string str, where all the letters are uppercase
*/

char *string_toupper(char *str)

{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	str -= i;
	return (str);
}
