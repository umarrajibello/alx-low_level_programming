#include "main.h"

/**
 * print_alphabet_x10 - a program that prints alphabets in lowercase z10
 *
 * Return: Always return void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		char c;

		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
	return;
}
