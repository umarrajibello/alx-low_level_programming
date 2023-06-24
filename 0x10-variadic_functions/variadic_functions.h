#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTTIONS_H

#include <stdio.h>
#include <stdarg.h>
#include <strings.h>
int _putchar(char);
int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const, ...);
#endif /* VARIADIC_FUNCTIONS_H */
