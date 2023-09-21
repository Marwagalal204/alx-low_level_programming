#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list
 * @head: pointer to the first node
 * @str: input string
 * Return: NULL for failure head for sucess
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *n = *head;
	size_t len = 0;

	if (str == NULL)
		return(NULL);

	while (str[len] != '\0')
	len++;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	n_node->len = len;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}

	else
	{
		while (n->next != NULL)
			n = n->next;
		n->next = n_node;
	}
	return (n_node);
}
