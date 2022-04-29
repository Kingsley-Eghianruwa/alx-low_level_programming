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
 * _strcat - appends src string to dest string
 * @dest: dest string
 * @src: src string
 * Return: string pointer
 */
char *_strcat(char *dest, char *src)
{
	int loop_index;
	int dest_string_length;
	int src_string_length;

	dest_string_length = _strlen(dest);
	src_string_length = _strlen(src);
	loop_index = 0;
	while (loop_index <= src_string_length)
	{
		dest[dest_string_length + loop_index] = src[loop_index];
		loop_index++;
	}
	return (dest);
}
