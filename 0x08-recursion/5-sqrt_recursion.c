#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion  - the natural square root of a number
 *@n:first number
 *@y:second number
 * Return: int
 */
int modified_sqrt_recursion(int n, int y)
{
if (y * y > n)
return (-1);
if (y * y == n)
return (y);
return  (_sqrt_recursion(n, y + 1));
}
