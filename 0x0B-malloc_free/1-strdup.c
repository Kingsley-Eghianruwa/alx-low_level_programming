#include "main.h"

/**
 * _strdup - function to duplicate a string
 * @str: input string
 * Return: pointer to a new strng or NULL otherwise
 */
char *_strdup(char *str)
{
	int str_length;
	int index = 0;
	char *str2;

	str_length = _strlen(str);
	str2 = malloc(sizeof(str));

	if (str2 == NULL)
	{
		return (NULL);
	}

	while (index <= str_length)
	{
		str2[index] = str[index];
		index = index + 1;
	}

	return (str2);
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

