#include"lists.h"
/**
 * dlistint_len - find the length of the linked list
 * @h: head node
 * Return: size of the linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
int i = 0;
const dlistint_t *temp;

if (h == NULL)
return (0);

temp = h;

while (temp != NULL)
{
i++;
temp = temp->next;
}
return (i);
}
