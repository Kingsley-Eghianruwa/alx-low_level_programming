#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: string pointer
 *
 * Description: null
 * Return: interger
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
/**
 * _strncat - appends n characters fro src string to dest string
 * @dest: string
 * @src: string
 * @n: no of character to append
 * Return: char pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_string_length;
	int src_string_length;
	int loop_index;

	dest_string_length = _strlen(dest);
	src_string_length = _strlen(src);
	loop_index = 0;

	if (src_string_length < n)
	{
		n = src_string_length;
	}

	while (loop_index <= n - 1)
	{
		dest[dest_string_length + loop_index] = src[loop_index];
		loop_index = loop_index + 1;
	}

	return (dest);
}
