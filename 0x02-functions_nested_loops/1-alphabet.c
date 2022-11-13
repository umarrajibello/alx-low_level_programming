#include "main.h"

/**
 * print_alphabet - a program that prints alphabets in lowercase
 *
 * Return: Always return void.
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return;
}
