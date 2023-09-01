#include "main.h"
/**
 *  * _strstr - find first occurence of a string in onther one
 *   * @haystack: the string to look into
 *    * @needle: string to look for into abother string
 *     * Return: hayastack for success and '\0' for failure
 *     */

char *_strstr(char *haystack, char *needle)
{
	int i, j, f;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				f = 1;
				if (f == 1)
					return (haystack);
			}
		}
	}
	return (0);
}
