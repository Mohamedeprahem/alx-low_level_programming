#include "main.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range -  function that creates an array of integers.
 * @min: min no
 * @max: max no
 *
 * Return: array of integers
 */
int *array_range(int min, int max)
{
int x, y;
int *P;
if (min > max)
return (NULL);
x = max - min + 1;
p = malloc(sizeof(int) * x);
if (!p)
return (NULL);
for (y = 0; y < x; y++)
p[y] = min++;
return (p);
}
