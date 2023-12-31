#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;
int _putchar(char c);
int _strlen(char *s);
size_t print_listint(const listint_len *h);
size_t listint_len(const listint_len *h);
listint_t *add_node(listint_t **head, const char *str);
listint_t *add_node_end(listint_t **head, const char *str);
void free_list(list_t *head);

#endif
