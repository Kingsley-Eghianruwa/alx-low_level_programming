#include "main.h"

/**
 * string_nconcat - combines s1 with n chars of s2
 * @s1: fisrt input string
 * @s2: second input string
 * @n: number of char to copy from s2
 * Return: pointer to string or NULL if malloc fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int mem = 0;
	char *str = NULL;
	int idx = 0;
	int n_s1 = 0;
	int null_flag_s1 = 0;
	int null_flag_s2 = 0;

	if (s1 == NULL)
	{
		null_flag_s1 = 1;
		s1 = malloc(1 * sizeof(char));
		if (s1 == NULL)
		{
			return (NULL);
		}
		s1[0] = '\0';
	}
	if (s2 == NULL)
	{
		null_flag_s2 = 1;
		s2 = malloc(1 * sizeof(char));
		if (s2 == NULL)
		{
			return (NULL);
		}
		s2[0] = '\0';
	}
	n_s1 = _strlen(s1) - 1;
	if ((int)n >= _strlen(s2))
	{
		n = _strlen(s2);
		mem = sizeof(s1) + sizeof(s2) - 1;
	}
	else
	{
		mem = sizeof(s1) + (n * sizeof(char));
	}
	str = malloc(mem);
	if (str == NULL)
	{
		return (NULL);
	}
	while (idx <= n_s1)
	{
		str[idx] = s1[idx];
		idx = idx + 1;
	}
	idx = 0;
	while (idx < (int)n)
	{
		str[n_s1 + 1 + idx] = s2[idx];
		idx = idx + 1;
	}
	if (null_flag_s1 == 1)
	{
		free(s1);
	}
	if (null_flag_s2 == 1)
	{
		free(s2);
	}
	return (str);
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

