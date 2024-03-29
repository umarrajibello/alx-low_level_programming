#include "variadic_functions.h"
#include <string.h>
#include <stdbool.h>

void print_all(const char * const format, ...);
/**
 * print_all - prints strings with a seperator.
 * @format: string of format specifiers
 *
 * Return: returns the sum
 */
void print_all(const char * const format, ...)
{
	char c_arg;
	bool comma = false;
	int i_arg, i, n;
	float f_arg;
	const char *s_arg, *ptr = format;
	va_list param;

	va_start(param, format);
	n = strlen(format);
	i = 0;
	while (i < n)
	{
		while (*ptr != '\0')
		{
			if (*ptr == 'c')
			{
				c_arg = va_arg(param, int);
				printf("%c", c_arg);
				comma = true;
			}
			else if (*ptr == 'i')
			{
				i_arg = va_arg(param, int);
				printf("%d", i_arg);
				comma = true;
			}
			else if (*ptr == 'f')
			{
				f_arg = va_arg(param, double);
				printf("%f", f_arg);
				comma = true;
			}
			else if (*ptr == 's')
			{
				s_arg = va_arg(param, char *);
				if (s_arg == NULL)
					printf("(nil)");
				else
					printf("%s", s_arg);
				comma = true;
			}
			else
				comma = false;
			ptr++;
			if ((*ptr != '\0') &&  (comma == true))
				printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(param);
}
