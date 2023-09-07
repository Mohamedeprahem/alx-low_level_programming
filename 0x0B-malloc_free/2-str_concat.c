#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - a function that concatenates two strings.
 *@s1: string1
 *@s2: string2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
int x, y, z;
char *p;
if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";
x = _strlen(s1);
y = _strlen(s2);
p = malloc((x + y) *sizeof(char) + 1);
if (p == 0)
return (0);
for (z = 0; z <= x + y; z++)
{
if (z < x)
p[z] = s1[z];
else
p[z] = s2[z - x];
}
p[z] = '\0';
return (p);
}
