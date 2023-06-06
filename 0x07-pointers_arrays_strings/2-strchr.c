#include "main.h"

/**
 * _strchr - Search for occurrence of a char
 * @s: pointer to the string to be searched
 * @c: the char in question
 *
 * Return: return the pointer to first occurrence
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; ++s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
	}
	return (NULL);
}
