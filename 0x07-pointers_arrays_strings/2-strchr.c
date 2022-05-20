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

	while (s[index] != '\0')
	{
		if (s[index] == c)
		{
			break;
		}
		else
		{
			index = index + 1;
		}
	}
	return (&s[index]);
}
