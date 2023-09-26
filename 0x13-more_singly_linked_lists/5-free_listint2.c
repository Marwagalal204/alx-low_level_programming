#include "lists.h"

/**
 * free_listint2 - a function that frees a list and set head to NULL
 * @head: a pointer to the head list
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	*head = NULL;
}
