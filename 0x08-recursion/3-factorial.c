#include "main.h"
#include <stdio.h>

/**
 *factorial - a function that returns the factorial of a given number
 *@n: var
 *
 * Return: int
 */
int factorial(int n)
{
int n;
if (n < 1)
return (1);
else
return (n * factorial(n - 1));
}
