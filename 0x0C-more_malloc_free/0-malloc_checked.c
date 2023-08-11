#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: character to fill in the array
 *
 * Return: returns a pointer to the array
 */
void *malloc_checked(unsigned int b)
{
	void *buff;

	buff = malloc(b);
	if (buff == NULL)
		exit(98);
	return (buff);
}
