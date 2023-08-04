#include "main.h"

/**
 * _islower - Check for lower characters.
 * @c: The character to be checked.
 *
 * Return: Returns 1 if succes otherwise returns 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
