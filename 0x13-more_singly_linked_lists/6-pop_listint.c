#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * @head: head of the list
 * Return n for success and 0 for failure
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	if (tmp != NULL)
		return (tmp->n);
	else
		return (0);
}
