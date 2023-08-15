#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - finds str length
 * @s: the str in question
 *
 * Return: returns the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
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
	int i, name_l, owner_l;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	name_l = _strlen(name);
	name_copy = malloc(sizeof(char) * name_l + 1);
	if (name_copy == NULL)
	{
		free(p);
		return (NULL);
	}
	owner_l = _strlen(owner);
	owner_copy = malloc(sizeof(char) * owner_l + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(p);
		return (NULL);
	}
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
