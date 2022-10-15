#include <stdio.h>

/**
 * main - Entry of the function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "biyte(s)";

	printf("Size of a char: %d %s\n", sizeof(char), str);
	printf("Size of an int: %d %s\n", sizeof(int), str);
	printf("Size of a long int: %d %s\n", sizeof(long int), str);
	printf("Size of a long long int: %d %s\n", sizeof(long long int), str);
	printf("Size of a float: %d %s\n", sizeof(float), str);
	return (0);
}
