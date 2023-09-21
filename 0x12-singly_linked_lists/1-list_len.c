#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: first node
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
size _t x = 0;
while (h)
{
	h = h->next;
	x++;
}
return (x);
}
