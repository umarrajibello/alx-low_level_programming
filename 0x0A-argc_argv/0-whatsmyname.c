#include <stdio.h>

/**
 * main - prints its name
 * @argc: number of command line args
 * @argv: string of command line args
 *
 * Return: returns 0.
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return(0);
}
