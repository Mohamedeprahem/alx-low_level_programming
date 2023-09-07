#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
int **x, y, z;
x = malloc(sizeof(*x) * height);
if (width <= 0 || height <= 0 || x == 0)
{
return (NULL);
}
else
{
for (y = 0; y < height; y++)
{
x[y] = malloc(sizeof(**x) * width);
if (x[y] == 0)
{
while (y--)
free(x[y]);
free(x);
return (NULL);
}
for (z = 0; z < width; z++)
x[y][z] = 0;
}
}
return (x);
}
