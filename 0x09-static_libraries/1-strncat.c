#include "main.h"
#include <string.h>

/**
 * _strncat - concartnates two strings.
 * @dest: the first string in question
 * @src: the second string in question.
 * @n: number of bites to be copied.
 *
 * Return: returns a pointer to the concartnated strings.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = strlen(dest);

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + dest_len + i) = *(src + i);
	}
	*(dest + dest_len + i) = '\0';
	return (dest);
}
