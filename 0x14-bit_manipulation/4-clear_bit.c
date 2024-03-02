#include "main.h"

/**
 * clear_bit - sets a bit to 0 at a given index.
 * @n: pointer of the number.
 * @index: index of the bit.
 *
 * Return: 1 on success,, -1 otherwise..
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
