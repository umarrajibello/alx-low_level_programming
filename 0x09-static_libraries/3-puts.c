#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: the string to be printed.
 *
 * Return: returns void.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
