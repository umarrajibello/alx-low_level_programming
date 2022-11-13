#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - program to print 24 hours
 *
 * Return: returns void..
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					printf("%d%d:%d%d\n", i, j, k, l);
				}
			}
		}
	}
}
