#include "main.h"

/**
 * _strcpy - copies string pointed to, to a buffer
 * @dest: the pointer to the  buffer
 * @str: the pointer to the string.
 *
 * Return: returns a pointer to the buffer.
 */
char *_strcpy(char *dest, char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = '\0';
	return (dest);
}
