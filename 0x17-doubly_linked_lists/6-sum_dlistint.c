#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of a doubly linked list
 * @head: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *temp;
int sum = 0;

if (head == NULL)
return (1);

temp = head;

while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
