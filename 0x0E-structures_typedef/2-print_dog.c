#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 *@d: d dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return (0)
if d.name == NULL
d.name = "(nil)";

if d.owner = NULL
d.owner = "(nil)";
printf("age %f name %s owner %s", d.age, d.name, d.owner);
}

