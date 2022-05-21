#ifndef MAIN_H

#include <stddef.h>

int _putchar(char);
int _strlen(char *s);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
int find_in_str(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
int find_in_string(char *, char);
int cmp_element(char *, char *);
int cmp_window(int, int, char *, char *);
char *_strstr(char *, char *);

#endif
