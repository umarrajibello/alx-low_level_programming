#include "main.h"

/**
 * _pow_recursion - calculates x to power y
 * @x: the base
 * @y: the exponent
 *
 * Return: returns x to power y..
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
