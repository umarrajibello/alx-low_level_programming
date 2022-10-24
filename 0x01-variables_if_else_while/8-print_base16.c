#include <stdio.h>

/**
 * main - This program prints numbers of base sixteen
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int i;
	char c;

	i = 0;
	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
