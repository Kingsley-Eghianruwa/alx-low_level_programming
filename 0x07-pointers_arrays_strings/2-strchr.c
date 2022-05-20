#include "main.h"
#include <stddef.h>

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

	while (s[index] != '\0')
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
