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
#endif