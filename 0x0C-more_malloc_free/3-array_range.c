#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range -  function that creates an array of integers.
 * @min: min range
 * @max: max range
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
int x, y;
int *P;
if (min > max)
return (NULL);
y = max - min + 1;
p = malloc(sizeof(int) * y);
if (p == NULL)
return (NULL);
for (x = 0; min <= max; x++)
p[x] = min++;
return (p);
}
