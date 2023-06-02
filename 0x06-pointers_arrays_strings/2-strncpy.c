#include "main.h"
#include <string.h>

/**
 * _strncpy - copy one string to another.
 * @dest: the first string in question
 * @src: the second string in question.
 * @n: number of bites to be copied.
 *
 * Return: returns a pointer to the concartnated strings.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
