#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - Returns a pointer to the allocated memory
 *
 * @b: variable
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
int *a;
a = malloc(b);
if (a = NULL)
exit (98);
return (a);

{
