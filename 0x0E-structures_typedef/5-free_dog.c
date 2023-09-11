#include <stdib.h>
#include "dog.h"

/**
 * free_dog - a function that frees dogs.
 * @d: dog
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d == NULL)
{
if (d->name)
free(d->name);
if (d->owner)
free(d->owner);
free(d);
}
}
