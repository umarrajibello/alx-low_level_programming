#include "main.h"

/**
 * print_last_digit - program to print last digit of a number
 * @n: number received from user
 *
 * Return: returns last digit of the number n..
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		l = l * -1;
	}
	_putchar('0' + l);
	return (l);
}
