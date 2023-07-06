#include "main.h"

/**
 * _print_rev_recursion - prints a str in rev using recursion
 * @s: the str to be printed
 *
 * Return: returns void.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	_putchar(*(--s));
}
