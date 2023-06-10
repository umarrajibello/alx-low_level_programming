#include <stdio.h>
#include <stdlib.h>

/**
 * main - Add input args
 * @argc: number of command line args
 * @argv: string of command line args
 *
 * Return: returns 0.
 */
int main(int argc, char **argv)
{
	int i, sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(*argv[i] >= '0' && *argv[i] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", sum);
	}
	return (0);
}
