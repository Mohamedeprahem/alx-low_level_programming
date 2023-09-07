#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid  - frees a 2 dimensional grid previously
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int g = 0;
for (; g < height; g++)
free(grid[g]);
free(grid);
}
