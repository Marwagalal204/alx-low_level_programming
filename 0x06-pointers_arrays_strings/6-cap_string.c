#include "main.h"
/**
 * cap_string - print string nd make first letter capital
 * @str: points to start of array
 * Descrption: print string and make first letter capital
 * Return: str reslt string
*/

char *cap_string(char *str)
{
	while (*str != '\0')
	{
		if (*str == ' ' || *str == '.' || *str == '\t'
		|| *str == '\n' || *str == ',' || *str == ';'
		|| *str == '!' || *str == '?' || *str == '"'
		|| *str == '(' || *str == ')' || *str == '{'
		|| *str == '}')
		{
			str++;
			if (*str >= 97 && *str <= 122)
				*str = *str - 32;
		}
		str++;
	}
	return (str);
}
