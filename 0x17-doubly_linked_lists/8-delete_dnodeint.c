#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
unsigned int i = 0;

if (*head == NULL)
return (-1);
current = (*head);
if (index == 0)
{
if ((*head)->next != NULL)
{
*head = (*head)->next;
(*head)->prev = NULL;
free(current);
return (1);
}
else
{
free(*head);
*head = NULL;
return (1);
}}
while (current != NULL)
{
i++;
current = current->next;
if (i == index)
{
current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
free(current);
break;
}}
return (1);
}
