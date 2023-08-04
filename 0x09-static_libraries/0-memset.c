#include "main.h"

/**
 * _memset - Copy constant bytes in memory
 * @s: the pointer to the memory location
 * @b: the constant byte
 * @n: the number of bytes to be filled in
 *
 * Return: returns
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
