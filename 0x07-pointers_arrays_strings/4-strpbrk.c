#include "main.h"

/**
 * find_in_string - finds a char in a string
 * @s: input string
 * @c: input search string
 * Return: pointer to char location in string
 */

int find_in_string(char *s, char c)
{
	int index = 0;
	int flag = 0;

	while (index <= _strlen(s) - 1)
	{
		if (s[index] == c)
		{
			flag = 1;
			break;
		}
		else
		{
			index = index + 1;
		}
	}
	return (flag);
}

/**
 * _strpbrk - implementation of strpbrk
 * @s: input string
 * @accept: input string of search char
 * Return: pointer to char
 */

char *_strpbrk(char *s, char *accept)
{
	char *str_ptr = NULL;
	int index = 0;
	int flag = 0;

	while (index <= _strlen(s) - 1)
	{
		flag = find_in_string(accept, s[index]);
		if (flag == 1)
		{
			str_ptr = &s[index];
			break;
		}
		else
		{
			index = index + 1;
		}
	}
	return (str_ptr);
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

