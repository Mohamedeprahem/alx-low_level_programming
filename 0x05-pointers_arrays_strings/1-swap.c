#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 *
 *@a: first integer
 *@b: second integer
 *
 */
void swap_int(int *a, int *b)
{
int z;
z = *a;
*a = *b;
*b = z;
}
