#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: head of the list
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	listint_t *tmp = (listint_t *)h;
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
