#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: head of the linked list
 * Return: number of elements in a linked list
*/
size_t listint_len(const listint_t *h)
{
	listint_t *tmp;
	int count = 0;

	if (h == NULL)
	{
		printf("Error\n");
		return (0);
	}

	tmp = (listint_t *)h;

	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

