#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char);
int _strlen(char *s);
int _pow(int, int);
int _string2int(char *);
void _putint(int);
void _putstring(char *);
int getdigits(int);

void *malloc_checked(unsigned int);
char *string_nconcat(char *, char *, unsigned int);
void *_calloc(unsigned int, unsigned int);
void *c_memset(void *, char, unsigned int);
int *array_range(int, int);
#endif
