#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function to free a structure
 * @d: the structure to be free'd
 *
 * Return: returns nothing
 */


void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
