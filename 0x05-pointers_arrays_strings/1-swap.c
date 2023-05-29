#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: the first integer
 * @b: the second integer
 *
 * Return: returns void.
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
