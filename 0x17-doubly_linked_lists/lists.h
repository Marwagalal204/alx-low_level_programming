#ifndef LIST_H
#define LIST_H

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 */
typedef struct dlistint_s
{
size_t n;
struct dlistint_s *next;
struct dlistint_s *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

#endif