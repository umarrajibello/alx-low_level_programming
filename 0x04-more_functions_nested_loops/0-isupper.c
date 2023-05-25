#include "main.h"

/**
 * _isupper - Checks whether a character is uppercase.
 * @c: the character to be checked.
 *
 * Return: returns 1 if uppercase otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
