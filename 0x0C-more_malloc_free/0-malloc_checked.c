#include "main.h"

/**
 * *malloc_checked -  allocates memory using malloc
 * @b: variable
 * Return: pointer to array
 */
void *malloc_checked(unsigned int b)
{
int *a = malloc(b);
if (a == 0)
exit(98);
return (a);
}
