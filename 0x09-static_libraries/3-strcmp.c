#include "main.h"

/**
 * _strcmp - compares two strings and return +ve, zero or -ve number
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 *
 * Return: returns s1 -s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, n;

	n = strlen(s1);
	for (i = 0; i < n && *(s1 + i)  == *(s2 + i) && *(s1 + i) != '\0'; i++)
	{
	}
	return (*(s1 + i) - *(s2 + i));
}
