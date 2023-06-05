#include "main.h"

/**
 * _strchar - Search for occurrence of a char
 * @s: pointer to the string to be searched
 * @c: the char in question
 *
 * Return: return the pointer to first occurrence
 */
char *_strchr(char *s, char c)
{
	char *f;
	int i, flag;

	flag = 0;
	for(i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			f = &s[i];
			flag++;
			break;
		}
	}
	if (flag == 0)
	{
		f = NULL;
	}
	return (f);
}

