#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
temp = head;
while (temp != NULL)
{
temp = temp->next;
free(head);
head = temp;
}
}
