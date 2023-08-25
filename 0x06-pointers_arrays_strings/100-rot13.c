#include "main.h"

/**
 * rot13 -  function that encodes a string using rot13.
 * @l: value
 * Return: encoded string
 */

char *rot13(char *l)
{
int i;
char y = "abcdefghijklmnopqrstuvwxyz"
char Y = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
while (*l)
char *ptr = l;
{
for (i = 0; i <= 52; i++)
{
if (*l == y[i])
{
*l = Y[i];
}
}
s++;
}
return (ptr);
}
