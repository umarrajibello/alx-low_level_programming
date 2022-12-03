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
	int mul, a, b;

	if (argc ==3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
