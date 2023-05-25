#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lower case
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c, n;

	for (n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
