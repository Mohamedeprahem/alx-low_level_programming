#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion  - the natural square root of a number
 *square - square root
 *@n:first number
 *@y:second number
 * Return: int
 */
int square(int n, int y);
int _sqrt_recursion(int n)
{
return  (square(n, 1));
}

/**
 * square  - the natural square root of a number
 *@n:first number
 *@y:second number
 * Return: int
 */
int square(int n, int y)
{
if (y * y == n)
return (y);
else
if (y * y < n)
return (square(n, y + 1));
else
return (-1);
}
}
