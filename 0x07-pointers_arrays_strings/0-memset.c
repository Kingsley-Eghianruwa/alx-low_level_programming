#include "main.h"

/**
 * _memset - fills n memory locations od s with b
 * @s: input pointer to string
 * @b: input char to fill with
 * @n: input number of times to fill s wit b
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int index = 0;

	while (index <= (n - 1))
	{
		s[index] = b;
		index = index + 1;
	}
	return (s);
}
