#include "main.h"

/**
 * leet -  function that encodes a string into 1337
 * @l: value
 * Return: c
 */

char *leet(char *l)
{
char *c = l;
char y[] = {'A', 'E', 'O', 'T', 'L'}
int x[] = {4, 3, 0, 7, 1};
int n;
while (*l)
{
for (n = 0; n < sizeof(y) / sizeof(char); n++)
{
if (*l == y[n] || *l == y[n] + 32)
{
*c = 48 + x[n];
}
}
l++;
}
return (c);
}
