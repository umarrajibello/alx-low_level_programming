#include "main.h"

/**
 * print_alphabet - a program that prints alphabets in lowercase
 *
 * Return: Always 0.
 */
int print_alphabet_x10(void)
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
	return (0);
}
