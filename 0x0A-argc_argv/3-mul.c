#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name
 * @argc: number of command line args
 * @argv: string of command line args
 *
 * Return: returns 0.
 */
int main(int argc, char **argv)
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
