#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array in which it searches
 * @size: size of the array
 * @cmp: pointer to compare functions
 *
 * Return: return index of the element or -1 on error.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((array == NULL) || (size <= 0) || (cmp == NULL))
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
