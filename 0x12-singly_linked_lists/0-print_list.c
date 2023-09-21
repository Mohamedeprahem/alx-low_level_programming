#include <lists.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Return: singly linked list node structure
 */
size_t print_list(const list_t *h);

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
