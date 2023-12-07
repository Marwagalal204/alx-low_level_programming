#include "lists.h"
/**
 * insert_dnodeint_at_index - adding new node at a certain index
 * @h: head node
 * @idx: giving index
 * @n: input data
 * Return: return NULL for failure and new node for success
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *prv, *nex = NULL;
unsigned int i = 0;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;
new->prev = NULL;

prv = *h;
if (*h == NULL)
{ *h = new;
return (new);
}
if (idx == 0)
add_dnodeint(h, n);
else if (idx == 1)
{ nex = prv->next;
new->prev = prv;
prv->next = new;
new->next = nex;
nex->prev = new;
}
else
{
while (prv != NULL)
{ i++;
prv = prv->next;
nex = prv->next;
if (i == idx - 1)
{ prv->next = new;
new->prev = prv;
new->next = nex;
nex->prev = new;
return (new);
}}}
return (new);
}
