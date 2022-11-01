#include "main.h"

/**
 * more_numbers - program to print numbers 0 to 14
 *
 */
void more_numbers(void)
{
	char i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('0' + j / 10);
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
