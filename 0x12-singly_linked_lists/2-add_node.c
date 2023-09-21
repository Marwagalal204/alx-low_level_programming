#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function adds a new node at the beginning of a list
 * @head: double pointer to the list_t list
 * @str: needs to be duplicated
 * Return: NULL for failure and head for success
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	n_node->len = len;
	n_node->next = (*head);
	(*head) = n_node;
	return (*head);
}
