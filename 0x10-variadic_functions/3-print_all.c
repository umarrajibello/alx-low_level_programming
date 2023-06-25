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
	char c_arg, *seperator = "";
	int i_arg;
	float f_arg;
	const char *s_arg, *ptr = format;
	va_list param;

	if (format == NULL)
	{
		printf("(nil)");
		return;
	}

	va_start(param, format);
	while (*ptr != '\0')
	{
		switch (*ptr)
		{
		case 'c':
			printf("%s", seperator);
			c_arg = va_arg(param, int);
			printf("%c", c_arg);
			seperator = ", ";
		break;
		case 'i':
			printf("%s", seperator);
			i_arg = va_arg(param, int);
			printf("%d", i_arg);
			seperator = ", ";
		break;
		case 'f':
			printf("%s", seperator);
			f_arg = va_arg(param, double);
			printf("%f", f_arg);
			seperator = ", ";
		break;
		case 's':
			printf("%s", seperator);
			s_arg = va_arg(param, char *);
			if (s_arg == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s_arg);
			seperator = ", ";
		break;
		default:
		break;
		}
		ptr++;
	}
	printf("\n");
	va_end(param);
}
