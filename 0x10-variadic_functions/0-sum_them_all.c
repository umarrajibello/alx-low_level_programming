#include <stdarg.h>

/**
 * sum_them_all - sum all the input args of the function.
 * @n: Number of arguments received from the user.
 *
 * Return: return the sum of all inputs..
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list va_ls;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(va_ls, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(va_ls, unsigned int);
	}
	va_end(va_ls);

	return (sum);
}
