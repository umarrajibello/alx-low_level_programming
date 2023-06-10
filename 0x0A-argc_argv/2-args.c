#include <stdio.h>

/**
 * main - prints command line args
 * @argc: number of command line args
 * @argv: string of command line args
 *
 * Return: returns 0.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
