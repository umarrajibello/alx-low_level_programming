#include "main.h"

/**
 * print_line - prints a line.
 * @n: determine the length of the line
 *
 * Return: returns void.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
