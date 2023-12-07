#include "lists.h"
/**
* get_dnodeint_at_index - returns the
* @head: head of the list
* @index: index of the nth node
* Return: nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *temp;

if (head == NULL)
return (NULL);
temp = head;
while (temp->next != NULL)
{
temp = temp->next;
i++;
if (i == index)
{
break;
}}
if (index > i)
{
printf("inavlid index");
}
return (temp);
}
