#include <stdio.h>

/**
 * positive_or_negative - The program checks for the sign of the number
 * @n: is the number received from the user
 * 
 * Return: returns 0 always (Success)
 */
int positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
