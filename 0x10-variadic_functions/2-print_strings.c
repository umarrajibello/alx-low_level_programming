#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings with a seperator.
 * @n: number of variable args
 * @separator: seperator to be printed
 *
 * Return: returns the sum
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list param;

	va_start(param, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(param, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if ((separator != NULL) && (i != n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(param);
}

