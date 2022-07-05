#include "main.h"

/**
 * str_concat - concatonate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new string or NULL otherwise
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int index = 0;
	int len_concat_s;
	int len_s1;
	int len_s2;

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	len_concat_s = len_s1 + len_s2 + 1;
	s3 = malloc(len_concat_s * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}

	while (index <= (len_s1 + len_s2 - 1))
	{
		if (index <= len_s1 - 1)
		{
			s3[index] = s1[index];
		}
		else
		{
			s3[index] = s2[index - len_s1];
		}
		index = index + 1;
	}

	s3[len_concat_s - 1] = '\0';

	return (s3);
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
	if (s == NULL)
	{
		return (0);
	}

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}

