#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other character.
 * @str: the string to be printed.
 *
 * Return: returns nothing.
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
