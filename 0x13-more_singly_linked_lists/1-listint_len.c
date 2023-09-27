#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: first node
 *
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
size_t x = 0;
while (h)
{
        h = h->next;
        x++;
}
return (x);
}
