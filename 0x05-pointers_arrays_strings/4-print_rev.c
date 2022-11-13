#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @str: the string in question received the user
 *
 * Return: return void
 */
void print_rev(char *str)
{
	int str_length;

	str_length = strlen(str);

	while (str_length >= 0)
	{
		_putchar(*(str + str_length));
		str_length--;
	}
	_putchar('\n');
}
