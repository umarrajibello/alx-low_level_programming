#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - struct type dog_t
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: a struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	char *name_copy, *owner_copy;
	int i = 0;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	name_copy = malloc(sizeof(name));
	if (name_copy == NULL)
		return (NULL);
	owner_copy = malloc(sizeof(owner));
	if (owner_copy == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		name_copy[i] = name[i];
	name_copy[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		owner_copy[i] = owner[i];
	owner_copy[i] = '\0';

	p->name = name_copy;
	p->age = age;
	p->owner = owner_copy;
	return (p);
}
