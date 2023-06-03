#include "main.h"

/**
 * times_table - prints the times table from 0 to 9.
 *
 * Return: returns nothing.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar('0' + (i * j));
			if (i != 9 && j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
