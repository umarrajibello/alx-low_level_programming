#include <stdio.h>

/**
 * main - This program prints numbers in ascending order neatly
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;
	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
