#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * @head: head of the list
 * Return: n for success and 0 for failure
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	*head = (*head)->next;
	data = tmp->n;
	free(tmp);
	tmp = NULL;

	return (data);
}
