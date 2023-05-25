#include "main.h"

/**
 * _abs - prints the absolute value of a number.
 * @n: the number to be checked.
 *
 * Return: returns abs value of n.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
