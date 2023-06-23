#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all its input.
 * @n: number of variable args
 *
 * Return: returns the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x, sum;
	va_list param;

	if (n == 0)
	{
		return (0);
	}
	va_start(param, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		x = va_arg(param, int);
		sum += x;
	}
	va_end(param);
	return (sum);
}

