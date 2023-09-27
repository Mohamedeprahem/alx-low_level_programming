#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements
 * @h: points to the list  node
 *
 * Return: singly linked list node structure
*/

size_t print_listint(const listint_t *h)
{

size_t s = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
s++;
}
return (s);
}
