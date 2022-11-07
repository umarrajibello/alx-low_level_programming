#include <string.h>
/**
 * *_strncat - concatenates two strings
 * @dest: the first string in question
 * @src: the second string in question
 * @n: is the number of bytes received from user
 * Return: return a bigger string after concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; j < n && src[j] != 0; j++)
	{
		dest[j + i] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
