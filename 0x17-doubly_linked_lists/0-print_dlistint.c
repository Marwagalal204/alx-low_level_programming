#include "lists.h"
/**
 * print_dlistint - a function prints all the elements of a dlistint_t list.
 * @h: head to the first node
 * Return: : the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
int i = 0;
const dlistint_t *temp;
if (h == NULL)
return (0);

temp = h;
while (temp != NULL)
{
printf("%d\n", temp->n);
i++;
temp = temp->next;
}
return (i);
}
