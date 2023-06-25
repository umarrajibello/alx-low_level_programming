#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - a struct with three members
 * @name: a string storing name
 * @age: a float storing age
 * @owner: the owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*_DOG_H */
