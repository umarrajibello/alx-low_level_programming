#include "3-calc.h"

/**
 * op_add - add two ints
 * @a: int 1
 * @b: int 2
 *
 * Return: returs the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds the difference
 * @a: int 1
 * @b: int 2
 *
 * Return: returns the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - finds the product of two ints
 * @a: int 1
 * @b: int 2
 *
 * Return: returns the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - find the quotient
 * @a: int 1
 * @b: int 2
 *
 * Return: returns the quotient of a / b or error
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - find the modulus
 * @a: int 1
 * @b: int 2
 *
 * Return: returns the modulus of a mod b or error
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
