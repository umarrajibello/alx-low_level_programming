#include <stdio.h>

/**
 * main - Entry point of main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar (' ');
					putchar('0' + k);
					putchar('0' + l);
					if (i >= 7 && j >= 8 && k >= 9 && l >= 9)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
