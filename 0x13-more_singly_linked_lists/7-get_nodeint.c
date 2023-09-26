#include "lists.h"
/**
 * get_nodeint_at_index -  a function that returns the nth node of a list
 * @head: points to the first node of the list
 * @index: index of the data
 * Return: NULL for failure and n for success
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	 if (head == NULL)
		 return (0);

	 while (head != NULL)
	 {
		 if (index == count)
			 return (head);

		 head = head->next;
		 count++;
	 }
	 return (NULL);
}
