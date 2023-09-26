#include "lists.h"
/**
 * insert_nodeint_at_index - a function insert new node at given position.
 * @head: points to the head of the first node
 * @idx: index of the list where new node added
 * @n: data of the node
 * Return: NULL for failure and index for success
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head, *n_node;
	unsigned int count = 0;
	(void)n;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}

	while (tmp != NULL)
	{
		if (count == idx - 1)
		{
			n_node->next = tmp->next;
			tmp->next = n_node;
			return (n_node);
		}
		tmp = tmp->next;
		count++;
	}
	free(n_node);
	return (NULL);
}
