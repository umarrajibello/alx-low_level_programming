#include "function_pointers.h"

/**
 * print_name - prints name using function pointers
 * @name: name to be printed
 * @f: the function pointer
 *
 * Return: returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
