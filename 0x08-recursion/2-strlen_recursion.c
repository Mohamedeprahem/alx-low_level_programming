#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion -  function that returns the length of a string. 
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
int length = 0;
if (*s > '\0')
{
length += _strlen_recursion(s+1);
return (length);
}
}
