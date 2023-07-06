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

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = strcpy(name);
	p->age = age;
	p->owner = strcp(owner);
	return (p);
}
