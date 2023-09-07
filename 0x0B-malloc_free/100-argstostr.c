#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - length of a string
 *@s: string
 *Return: size
 */
int _strlen(char *s)
{
int size = 0;
for (; s[size] != '\0'; size++)
;
return (size);
}

/**
 **argstostr - concatenates all the arguments of your program.
 *@ac : int
 *@av : char
 *Return: pointer
 */
char *argstostr(int ac, char **av)
{
int x = 0, y = 0, z = 0, v = 0;
char *p;
if (ac == 0 || av == NULL)
return (NULL);
for (; x < ac; x++, y++)
y += _strlen(av[x]);
p = malloc(sizeof(char) * y + 1);
if (p == 0)
return (NULL);
for (x = 0; x < ac; x++)
{
for (z = 0; av[x][z] != '\0'; z++, v++)
p[v] = av[x][z];
p[v] = '\n';
v++;
}
p[v] = '\0';
return (p);
}
