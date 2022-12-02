#include <stdio.h>

/**
 * main - program to use environment variables argc and  argv.
 *@argc: the cout of environment variables.
 *@argc: an array of names of input variables.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
