#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - iterate through an array
 * @array: the array
 * @size: size of the array
 * @action: the function pointer
 *
 * Return: returns nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
