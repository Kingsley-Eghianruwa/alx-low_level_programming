#include "main.h"


/**
 * _strchr - locates a char in a string
 * @s: input string
 * @c: input char
 * Return: pointer to located char
 */
char *_strchr(char *s, char c)
{
	int index = 0;
	char *cptr = NULL;
	int array_length;

	array_length = _strlen(s);
	while (index <= array_length)
	{
		if (s[index] == c)
		{
			cptr = &s[index];
			break;
		}
		else
		{
			index = index + 1;
		}
	}
	return (cptr);
}

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

