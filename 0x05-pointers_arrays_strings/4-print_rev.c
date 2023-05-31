#include "main.h"
#include <string.h>
/**
 * print_rev - prints a str in rev
 * @str: the str to be printed
 *
 * Return: returns void.
 */
void print_rev(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
