#include "main.h"
#include <stdio.h>

/**
 * rev_string -  function that reverses a string
 *
 * @s : stiring parameter
 *
 * Return: string
 */
void rev_string(char *s)
{
int n, x;
char y;
for (n = 0; s[n] != '\0'; ++n)
for (x = 0; x < n / 2; x++)
{
y = s[x];
s[x] = s[n - 1 - x];
s[n - 1 - x] = y;
}
}
