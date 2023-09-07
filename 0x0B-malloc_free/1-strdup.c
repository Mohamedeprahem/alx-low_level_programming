#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup -  function that returns a pointer to a newly allocated.
 *
 * @str: string
 * Return: Always 0.
 */
char *_strdup(char *str)
{
int v = 0, size = 0;
char *c;
if (str == NULL)
return (NULL);
for (; str[size] != '\0'; size++)
c = malloc(size * sizeof(*str) + 1);
if (c == 0)
return (NULL);
else
{
for (; v < size; v++)
c[v] = str[v];
}
free(c);
return (c);
}
