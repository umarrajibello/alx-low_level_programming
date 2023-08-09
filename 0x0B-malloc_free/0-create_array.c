#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to fill in the array
 *
 * Return: returns a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(size) + 1);
	if ((size == 0) || (arr == NULL))
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	arr[i] = '\0'
	return (arr);
}
