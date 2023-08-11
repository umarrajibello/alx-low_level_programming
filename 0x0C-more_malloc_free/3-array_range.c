#include "main.h"

/**
 * array_range - creates a range of numbers
 * @min: the minimum number
 * @max: the maximum number
 *
 * Return: returns a pointer to the array.
 */
int *array_range(int min, int max)
{
	int *ptr, i, range = max - min + 1;

	ptr = malloc(sizeof(max) * range);
	for (i = 0; i < range; i++)
		ptr[i] = min++;
	return (ptr);
}
