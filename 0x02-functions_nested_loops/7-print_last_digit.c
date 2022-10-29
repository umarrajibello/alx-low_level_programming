#include "main.h"

/**
 * print_last_digit - program to print last digit of a number
 * @n: number received from user
 *
 * Return: returns last digit of the number n..
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar('0' + (n % 10));
	return (n % 10);
}
