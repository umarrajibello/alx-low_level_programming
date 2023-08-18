#include "3-calc.h"

/**
 * main - Entry poit
 * @argc: no. of command line args
 * @argv: string of inputs
 *
 * Return: returns 0 or -98 on error.
 */
int main(argc, **argv)
{
	int a, b, result;
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = get_op_func(argv[2])(a, b);
	printf("%d\n", result);
	return (0);
}


