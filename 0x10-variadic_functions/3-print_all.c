#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - prints strings with a seperator.
 * @format: string of format specifiers
 *
 * Return: returns the sum
 */
void print_all(const char * const format, ...)
{
	char c_arg;
	int i_arg, i, n;
	float f_arg;
	const char *s_arg, ptr;
	va_list param;

	va_start(param, format);
	ptr = format;
	n = strlen(format);
	i = 0;
	while (i < n)
	{
		while (ptr++ != '\0')
		{
			if (*ptr == 'c')
			{
				c_arg = va_arg(param, char);
				printf("%c", c_arg);
			}
			else if (*ptr == 'i')
			{
				i_arg = va_arg(param, int);
				printf("%d", i_arg);
			}
			else if (*ptr == 'f')
			{
				f_arg = va_arg(param, float);
				printf("%f", f_arg);
			}
			else if (*ptr == 's')
			{
				s_arg = va_arg(param, char *);
				if (s_arg == NULL)
				{
					printf("nil");
				}
				else
				{
					printf("%s", s_arg);
				}
			}
		}
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(param);
}
