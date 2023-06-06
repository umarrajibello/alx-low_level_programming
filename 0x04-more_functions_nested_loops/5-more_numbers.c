#include "main.h"

/**
 * more_numbers - prints from 0 - 14, 10 times
 *
 * Return: return void
 */
void more_numbers(void)
{
	char i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
