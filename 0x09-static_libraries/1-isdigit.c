#include "main.h"

/**
 * _isdigit - Checks whether a digit is entered.
 * @c: this item to be checked.
 *
 * Return: returns 1 if c is a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
