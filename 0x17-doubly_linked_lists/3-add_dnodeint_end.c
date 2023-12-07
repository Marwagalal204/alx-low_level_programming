#include"lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *tail;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
new->prev = NULL;
if (*head == NULL)
{
(*head) = new;
return (*head);
}
tail = *head;
while (tail->next != NULL)
{
tail = tail->next;
}
new->prev = tail;
tail->next = new;
tail = new;
return (new);
}
