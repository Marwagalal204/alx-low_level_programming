#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all data
 * @head: first node pf the list
 * Return: 0 for failure and sum for success
*/
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);

	tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
