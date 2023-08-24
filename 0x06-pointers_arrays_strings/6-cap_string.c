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

		if (str[i - 1] == ' ' || str[i - 1] == '.' || str[i - 1] == '\t'
		|| str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';'
		|| str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"'
		|| str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{'
		|| str[i - 1] == '}')
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		}
		else if ((str[0] >= 97 && str[0] <= 122))
		{
			str[0] = str[0] - 32;
		}
		i++;
	}
	return (str);
}
