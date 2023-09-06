#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * wordlen - function counts string long
 * @s: inputed string
 * Return: ord count.
*/
int wordlen(char *s)
{
	int i, flag, words = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		{
			flag = 0;
		}
		else if (flag != 0)
		{
			words++;
			flag = 1;
		}
	}
	return (words);
}

/**
 * strtow - a function that splits a string into words.
 * @str: input string
 * Return: Null for failure and splites string for sucess
*/

char **strtow(char *str)
{
	int w, n, i, ch, last, begin, index = 0;
	char **words, *wrd;

	w = wordlen(str);

	words = (char **) malloc(sizeof(char *) * (w + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (ch)
			{
				last = i;

				wrd = (char *)malloc(sizeof(char) * (ch + 1));

				if (wrd == NULL)
					return (NULL);

				while (begin < last)
				{
					wrd[index++] = str[begin++];
				}
				wrd[index] = '\0';

				words[n] = wrd;
				n++;
				ch = 0;
			}
		}
		else if (ch == 0)
		{
			begin = i;
		}
		ch++;
	}
	return (words);
}
