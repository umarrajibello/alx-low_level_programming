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
	char *f;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			f = &s[i];
			return (f);
		}
	}
	return (NULL);
}
