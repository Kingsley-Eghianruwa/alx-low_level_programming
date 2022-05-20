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
 * find_in_str - searches a string for a char
 * @s: input string
 * @c: input char
 * Return: 1 if char found, 0 otherwise
 */

int find_in_str(char *s, char c)
{
	int flag = 0;
	int index = 0;

	while (index <= _strlen(s) - 1)
	{
		if (s[index] == c)
		{
			flag = 1;
			break;
		}
		index = index + 1;
	}
	return (flag);
}

/**
 * _strspn - implementation of c sttrspn functionality
 * @s: input string
 * @accept: char string to search for
 * Return: int of number of found string
 */

unsigned int _strspn(char *s, char *accept)
{
	int index = 0;
	unsigned int count = 0;
	unsigned int flag = 0;

	while (s[index] != '\0')
	{
		flag = find_in_str(accept, s[index]);

		if (flag == 0)
		{
			break;
		}
		else
		{
		count = count + flag;
		index = index + 1;
		}
	}
	return (count);
}
