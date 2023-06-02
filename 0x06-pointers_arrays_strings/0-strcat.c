#include "main.h"
#include <string.h>

/**
 * _strcat - concartnates two strings.
 * @dest: the first string in question
 * @src: the second string in question.
 *
 * Return: returns a pointer to the concartnated strings.
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i < len2; i++)
	{
		*(dest + len1 + i - 1) = *(src + i);
	}
	*(dest + len1 + len2) = '\0';
	return (dest);
}
