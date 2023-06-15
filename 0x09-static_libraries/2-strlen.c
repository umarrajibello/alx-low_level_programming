#include "main.h"

/**
 * _strlen - calculate length of string s
 * @s: the string pointer.
 *
 * Return: returns the lenght of the string s.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s++ != '\0')
	{
		len++;
	}
	return (len);
}
