#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatnates two strings
 * @s1: the pointer to the 1st string
 * @s2: the pointer to the 2nd string
 *
 * Return: returns a pointer to the concartnated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, s_len, s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	s_len = s1_len + s2_len;
	s = malloc(s_len + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		s[i] = s1[i];
	for (; i <= s_len; i++)
		s[i] = s2[i - s1_len];
	return (s);
}
