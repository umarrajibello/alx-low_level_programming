#include "main.h"

/**
 * factorial - calculates the factorial of n
 * @n: the number
 *
 * Return: returns the factorial of n.
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
