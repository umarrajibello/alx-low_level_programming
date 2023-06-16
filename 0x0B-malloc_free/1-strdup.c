#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - creates a duplicate of a string
 * @str: the pointer to the string in question
 *
 * Return: returns a pointer to duplicate string
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, s_len;

	s_len = strlen(str);
	s = malloc(sizeof(str));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= s_len; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
