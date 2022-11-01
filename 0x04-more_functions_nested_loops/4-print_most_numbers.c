#include "main.h"

/**
 * print_most_numbers - program to print single digit numbers except 2 & 4
 *
 */
void print_most_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
