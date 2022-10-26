#include <stdio.h>

/**
 * main - This program prints numbers in ascending order neatly
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = (i + 1); j <= 9; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			putchar(',');
			putchar(' ');
		}
		if (i == 9)
		{
			continue;
		}
	}
	putchar('\n');

	return (0);
}
