#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory and set to zero
 * @nmemb: number of elements of the array
 * @size: size of the elements
 *
 * Return: return nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i, *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(sizeof(size) * nmemb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = 0;
	ptr = p;
	return (ptr);
}
