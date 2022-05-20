#include "main.h"

/**
 * _memcpy - copys n memory locations from src to dest
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: number of copy operations
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index <= (n - 1))
	{
		dest[index] = src[index];
		index = index + 1;
	}
	return (dest);
}
