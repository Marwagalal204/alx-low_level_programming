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
	int l = 0, w, n, i, ch, last, begin;
	char **words, *wrd;

	while (*(str + l))
		l++;

	w = wordlen(str);

	words = (char **) malloc(sizeof(char *) * (w + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (ch)
			{
				last = i;
				wrd = (char *) malloc(sizeof(char) * (ch + 1));

					if (wrd == NULL)
						return (NULL);

				while (begin < last)
					*wrd++ = str[begin++];
				*wrd = '\0';
				words[n] = wrd - ch;
				n++;
				ch = 0;
			}
		}
		else if (ch == 0)
			begin = i;
	}
	return (words);
}
