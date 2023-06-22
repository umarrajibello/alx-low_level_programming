#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with a seperator.
 * @n: number of variable args
 * @separator: seperator to be printed
 *
 * Return: returns the sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list param;

	va_start(param, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(param, int);
		printf("%d", x);
		if ((separator != NULL) && (i != n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(param);
}

