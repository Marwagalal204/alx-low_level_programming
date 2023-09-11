#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - function copies a string from location to another
 * @str: inputes str to be copied
 * Return: NULL for filure and ptr for success
*/

char *_strdup(char *str)
{
	int i, tall = 0;
	char *copied;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		tall++;

	copied = malloc(tall + 1 * sizeof(char));

	if (copied == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)

		copied[i] = str[i];

	return (copied);
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

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = _strdup(owner);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;

	return (dog);
}
