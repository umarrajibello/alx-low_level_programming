#include "main.h"

/**
 * _strlen_recursion - calculate lenght of str using recursion
 * @s: the str to be printed
 *
 * Return: returns len of s.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(++s));
}
