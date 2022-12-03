#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to use environment variables argc and  argv.
 *@argc: the cout of environment variables.
 *@argv: an array of names of input variables.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
