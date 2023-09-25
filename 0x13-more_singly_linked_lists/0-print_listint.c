#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: head of the list
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	listint_t *tmp;
	int count = 0;

	if (h == NULL)
	{
		printf("Error\n");
		return (-1);
	}
	tmp = malloc(sizeof(listint_t));
	
	if (tmp == NULL)
		return (-1);

	tmp = (listint_t *)h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
