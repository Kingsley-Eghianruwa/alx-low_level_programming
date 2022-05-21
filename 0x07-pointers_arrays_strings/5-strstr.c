#include "main.h"

/**
 * cmp_element - compares two characters
 * @c1: pointer to first character
 * @c2: pointer to second character
 * Return: 1 if they are the same, -1 otherwise
 */

int cmp_element(char *c1, char *c2)
{
	if (*c1 == *c2)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
/**
 * cmp_window - compares string by sliding substring
 * @index: start index for window
 * @k: length of substring
 * @string: input string
 * @substring: comparing substring
 * Return: int eqaul to length of substring if found
 */
int cmp_window(int index, int k, char *string, char *substring)
{
	int index0 = 0;
	int count = 0;

	while (index0 <= k)
	{
		count = count + cmp_element(&string[index], &substring[index0]);
		index = index + 1;
		index0 = index0 + 1;
	}
	return (count);
}

/**
 * _strstr - implementation of strstr function
 * @haystack: main string
 * @needle: sub string
 * Return: pointer to locatioon of substring in string
 */

char *_strstr(char *haystack, char *needle)
{
	int count = 0;
	int index = 0;
	int n;
	int k;
	char *str_ptr = NULL;

	k = _strlen(needle) - 1;
	n = _strlen(haystack) - 1;

	while (index <= n)
	{
		count = cmp_window(index, k, haystack, needle);
		if (count == k + 1)
		{
			str_ptr = &haystack[index];
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

