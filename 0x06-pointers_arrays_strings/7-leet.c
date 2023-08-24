#include "main.h"
/**
 * leet - function encode string
 * @leet: input
 * Return: return value of leet
*/

char *leet(char *leet)
{
	char lett[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i;
	int n = 0;

	while (*leet != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*leet == lett[i])
				*leet = num[i];
		}
		leet++;
		n++;
	}
	leet -= n;
	return (leet);
}
