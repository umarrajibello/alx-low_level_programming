#include "main.h"

/**
 * print_most_numbers - print base 10 numerals except 2 and 4
 *
 * Return: return void
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
