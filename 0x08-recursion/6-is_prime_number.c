#include "main.h"

/**
 * prime_guess - checks for prime guesses
 * @n: the number whose prime is to be found
 * @gs: the guess
 *
 * Return: returns the sr or -1 on error
 */


int prime_guess(int n, int gs)
{
	if ((n % gs) == 0)
		return (0);
	if (gs > (n / 2))
		return (1);
	else
		return (prime_guess(n, gs + 1));
}

/**
 * is_prime_number - finds whether or not a number is prime or not
 * @n: the number to be checked
 *
 * Return: returns 1 if prime or 0 otherwise.
 */

int is_prime_number(int n)
{
	int gs = 2;

	if (n <= 1)
		return (0);
	else
		return (prime_guess(n, gs));
}
