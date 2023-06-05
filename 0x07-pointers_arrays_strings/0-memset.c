#include "main.h"

/**
 * _memset - Copy constant bytes in memory
 * @
 * @
 * @
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
