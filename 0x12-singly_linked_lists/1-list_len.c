#include "lists.h"

/**
 * list_len - a function returns number of elements in a linked list
 * @h: pointer to the head (first node)
 * Return: count
*/

size_t list_len(const list_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
