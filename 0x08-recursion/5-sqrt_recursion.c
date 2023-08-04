#include "main.h"

/**
 * sqrt_help - checks for sqrt guesses
 * @n: the number whose sqrt is to be found
 * @sr: the guess
 *
 * Return: returns the sr or -1 on error
 */


int sqrt_help(int n, int sr)
{
	if (n == sr * sr)
		return (sr);
	else if (sr < n / 2)
		return (sqrt_help(n, ++sr));
	else
		return (-1);
}

/**
 * _sqrt_recursion - finds the natural square root of a number recursively
 * @n: the number whose square root is to be found
 *
 * Return: returns the square root or -1 on error..
 */

int _sqrt_recursion(int n)
{
	int sr = 1;

	return (sqrt_help(n, sr));
}
