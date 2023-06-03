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

	tmp = 0;
	for (i = 0; i < n / 2; i++)
	{
		*(a + i) = tmp;
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = tmp;
	}
}
