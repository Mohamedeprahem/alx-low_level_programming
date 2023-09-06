#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - array of chars initializes with a specific char.
 * @c: char
 * @size: the size of the memory to print
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c);
{
char *v = malloc(size);
if (size == 0 || v == 0)
return (0);
while (size--)
v[size] = c;
return (v);
}
