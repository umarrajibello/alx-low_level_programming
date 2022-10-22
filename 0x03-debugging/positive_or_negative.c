#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The main function fo the
 * n - integer recieved from prompt
 * Return: returns 0 always (Success)
 */
int main(void)
{
	int positive_or_negative(int n)
	{
		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else
		{
			printf("%d is negative\n", n);
		}
	return (0);
}
