#include <stdio.h>
#include "dog.h"

/**
 * init_dog - creates an instance of struct dog
 * @d: pointer to struct dog
 * @name: member name
 * @age: member age
 * @owner: member owner
 *
 * Return: returns nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
