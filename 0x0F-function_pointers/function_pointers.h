#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

int _putchar(char);
void print_name(char *, void (*f)(char *));
void array_iterator(int *, size_t, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));


#endif /* MAIN_H */
