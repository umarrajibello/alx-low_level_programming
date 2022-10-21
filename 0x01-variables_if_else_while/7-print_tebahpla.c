#include <stdio.h>

/**
 * main - This is the entry of the main function
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c = c - 1;
	}
	putchar('\n');
	return (0);
}
