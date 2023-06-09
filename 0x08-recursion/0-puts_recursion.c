#include "main.h"

/**
 * _puts_recursion - prints a string to stdout using recursion
 * @s: the string in question
 *
 * Return: returns void
 */
void _puts_recursion(char *s)
{
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
