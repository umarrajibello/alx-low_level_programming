#include <string.h>
/**
 * *_strncpy - concatenates two strings
 * @dest: the first string in question
 * @src: the second string in question
 * @n: is the number of bytes received from user
 * Return: return a bigger string after concatenation
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
