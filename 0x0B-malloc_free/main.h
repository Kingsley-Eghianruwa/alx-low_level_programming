#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int _putchar(char);
int _strlen(char *s);
int _pow(int, int);
int _string2int(char *);
void _putint(int);
void _putstring(char *);
int getdigits(int);


char *create_array(unsigned int, char);
char *_strdup(char *str);
char *str_concat(char *, char *);
int **alloc_grid(int width, int height);
void int_memset(int *s, int b, int n);
void freemem(int **, int); 
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int fill_str(char *, char *, int);

#endif
