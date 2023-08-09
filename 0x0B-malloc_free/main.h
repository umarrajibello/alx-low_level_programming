#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int _putchar(char);
char *create_array(unsigned int, char);
char *_strdup(char *);
char *str_concat(char *, char *);
int **alloc_grid(int, int);
void free_grid(int **grid, int height);


#endif
