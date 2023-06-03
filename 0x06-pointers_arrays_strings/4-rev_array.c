#include "main.h"

/**
 * reverse_array - reverse the elements of an array
 * @a: the array in question
 * @n: number of elments in the array
 *
 * Return: returns nothing
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = tmp;
	}
}
