#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - find the lenght of  string
 * @s: input
 * Descrption:  function that count the lenght of  string
 * Return: len of string
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * _strcpy - copies a string from one pointer to another.
 * @src: input.
 * @dest: input.
 * Return: function copies a string .
*/

char *_strcpy(char *dest, char *src)
{
	int n, i;

	for (n = 0; src[n] != '\0'; n++)
		;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - function creates new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: Null for failure and dog for success
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int x = 0, n = 0;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	x = (_strlen(name) + 1);

	(*dog).name = malloc(x);

	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	n = (_strlen(owner) + 1);

	(*dog).owner = malloc(n);

	if ((*dog).owner == NULL)
	{
		free(dog);
		free((*dog).name);
		return (NULL);
	}

	_strcpy((*dog).name, name);
	_strcpy((*dog).owner, owner);
	(*dog).age = age;

	return (dog);
}
