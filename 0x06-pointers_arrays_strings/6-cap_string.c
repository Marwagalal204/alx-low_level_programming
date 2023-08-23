#include "main.h"
/**
 * cap_string - print string nd make first letter capital
 * @str: points to start of array
 * Descrption: print string and make first letter capital
 * return: resulting string
*/

char *cap_string(char *str)
{
	while (*str != '\0')
	{
		if (*str == 32 || *str == 46 || *str == 9 || *str == '\n')
		{
			str++;
			if (*str >= 97 && *str <= 122)
				*str = *str - 32;
		}
		str++;
	}
	return (str);
}
