#include "main.h"
/**
 * cap_string - print string nd make first letter capital
 * @str: points to start of array
 * Descrption: print string and make first letter capital
 * Return: str reslt string
*/

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '.' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == ',' || str[i] == ';'
		|| str[i] == '!' || str[i] == '?' || str[i] == '"'
		|| str[i] == '(' || str[i] == ')' || str[i] == '{'
		|| str[i] == '}')
		{
			i++;
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
