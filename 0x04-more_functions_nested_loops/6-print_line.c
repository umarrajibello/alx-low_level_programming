#include "main.h"

/**
 * print_line - program to draw a line
 * @n: is the number that determine the length of the line
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
