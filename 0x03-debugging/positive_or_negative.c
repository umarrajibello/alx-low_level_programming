#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - test whether a number is positive or negative
 *
 * Return:  Always 0 (success)
 */
void positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
}
