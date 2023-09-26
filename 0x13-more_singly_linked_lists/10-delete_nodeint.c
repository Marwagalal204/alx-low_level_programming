#include "lists.h"
/**
 * delete_nodeint_at_index -  function deletes node at index of linked list
 * @head: a pointer points to first element in the linked list
 * @index: given index
 * Return: -1 for failure and 1 for success
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prev = NULL;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (tmp != NULL)
	{
		if (count == index)
		{
			prev->next = tmp->next;
			free(tmp);
			count++;
		}
		return (1);
	}
	return (-1);
}
