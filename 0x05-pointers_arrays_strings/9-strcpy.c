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
 * _strcpy - copies a string
 * @dest: char *
 * @src: char *
 * Return: char *
 */

char *_strcpy(char *dest, char *src)
{
	int loop_index = 0;
	int string_source_length;

	string_source_length = _strlen(src);
	while (loop_index <= string_source_length)
	{
		dest[loop_index] = src[loop_index];
		loop_index = loop_index + 1;
	}
	return (dest);

}

