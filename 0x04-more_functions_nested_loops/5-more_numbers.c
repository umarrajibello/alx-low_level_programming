#include "main.h"

/**
 * more_numbers - prints from 0 - 14, 10 times
 *
 * Return: return void
 */
void more_numbers(void)
{
	char count, c, d;

	for (count = 0; count < 10; count++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			_putchar(c);
		}
		for (d = '0'; d <= '4'; d++)
		{
			_putchar('1');
			_putchar(d);
		}
		_putchar('\n');
	}
}
