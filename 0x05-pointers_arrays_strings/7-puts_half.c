#include "main.h"
#include <string.h>

/**
 * puts_half - prints last half of a str
 * @str: the string in question.
 *
 * Return: returns nothing.
 */
void puts_half(char *str)
{
	int str_len, i;

	str_len = strlen(str);
	if (str_len % 2 == 0)
	{
		for (i = str_len / 2; i < str_len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = str_len / 2; i < str_len - 1; i++)
		{
			_putchar(str[i + 1]);
		}
	}
	_putchar('\n');
}
