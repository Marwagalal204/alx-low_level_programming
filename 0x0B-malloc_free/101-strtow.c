#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * strtow - a function that splits a string into words.
 * @str: input string
 * Return: Null for failure and splites string for sucess
*/

char **strtow(char *str)
{
	int i, flag, words = 0;
	char **arr, *arr1;

	for (i = 0; str[i] != '\0'; i++)
	{

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			flag = 0;
		}
		else
		{
			*arr1 = str[i];
			arr1++;
		}

		if (flag != 0)
		{
			**arr = *arr1;
			arr++;
			words++;
			arr1++;
			*arr1 = '\0';
			arr[words] = NULL;
			words++;
			flag = 1;
		}
	}
	return (arr);
}
