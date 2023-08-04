#include <stdio.h>

/**
 * main - Counts command line args
 * @argc: number of command line args
 * @argv: string of command line args
 *
 * Return: returns 0.
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
