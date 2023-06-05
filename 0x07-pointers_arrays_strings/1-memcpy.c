#include "main.h"

/**
 * _memcpy - Copy one memory location to another
 * @dest: the pointer to the memory location
 * @src: pointer to the memory to be copied
 * @n: the number of bytes to be copied
 *
 * Return: returns
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
