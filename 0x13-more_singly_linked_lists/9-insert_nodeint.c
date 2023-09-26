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
	listint_t *tmp = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (0);

	while (*head != NULL)
	{
		if (idx == count)
		{
			tmp->next = (*head)->next;
			(*head)->next = tmp;
			tmp->n = n;
			return (tmp);
		}
		*head = (*head)->next;
		count++;
	}
	return (NULL);
}
