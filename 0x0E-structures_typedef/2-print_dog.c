#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: d dog
 *
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = "(nil)";

if (d->owner == NULL)
d->owner = "(nil)";
printf("name %s\n age %f\n owner %s\n", d->name, d->age, d->owner);
}
