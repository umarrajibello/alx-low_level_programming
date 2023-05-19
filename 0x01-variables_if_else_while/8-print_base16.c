#include <stdio.h>

/**
 * main - Entry point of main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
