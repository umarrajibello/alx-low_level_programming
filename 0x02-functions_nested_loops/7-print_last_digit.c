#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @num: the number whos last digit to be printed
 *
 * Return: returns last digit
 */
int print_last_digit(int num)
{
	int ld;

	ld = num % 10;
	if (ld < 0)
	{
		ld = -ld;
	}
	_putchar('0' + ld);
	return (ld);
}
