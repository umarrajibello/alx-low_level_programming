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
		_putchar('0' + i);
	}
	for (j = 0; j <= 4; j++)
	{
		_putchar('0' + 1);
		_putchar('0' + j);
	}
	_putchar('\n');
}
