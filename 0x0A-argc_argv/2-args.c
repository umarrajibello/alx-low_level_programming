#include <stdio.h>

/**
 * main - program to use environment variables argc and  argv.
 *@argc: the cout of environment variables.
 *@argv: an array of names of input variables.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
