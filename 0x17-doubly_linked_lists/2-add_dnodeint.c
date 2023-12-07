#include "lists.h"
/**
 * add_dnodeint - function adds a new node at the beginning of a list.
 * @head: head node
 * @n: data
 * Return: new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = NULL;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

(new)->n = n;
new->next = NULL;
new->prev = NULL;

if (*head == NULL)
{
(*head) = new;
return (*head);
}
else
{
new->next = *head;
(*head)->prev = new;
*head = new;
}
return (new);
}
