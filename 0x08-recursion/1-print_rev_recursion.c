#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion -  a function that prints a string
 *
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s);
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_puts_recursion(s + 1);
_putchar(*s);
}
}