#include <string.h>
/**
 * *_strcat - concatenates two strings
 * @*est: the first string in question
 * @*src: the second string in question
 * Return: return a bigger string after concatenation
 */
char *_strcat(char *dest, char *src)
{
	size_t i, j;

	for(i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for(j = 0; src[j] != '\0'; j++)
	{
		dest[j + i] = src[j];
	}
	dest[i + j] = '\0';
	return dest;
}
