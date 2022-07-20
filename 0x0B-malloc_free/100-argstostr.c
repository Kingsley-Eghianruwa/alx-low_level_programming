#include "main.h"

/**
 * argstostr - prints out the list of arguments
 * @ac: argument counter
 * @av: argument vector
 * Return: pointer to a string
 */

char *argstostr(int ac, char **av)
{
	int index = 0;
	int bytes = 0;
	char *s = NULL;
	int char_position = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (index < ac)
	{
		bytes = bytes + sizeof(av[index]);
		index = index + 1;
	}

	bytes = bytes + 1;
	s = malloc(bytes * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	index = 0;
	while (index < ac)
	{
		char_position = fill_str(s, av[index], char_position);
		index = index + 1;
	}
	s[char_position] = '\0';

	return (s);
}
/**
 * fill_str - fills a string with another string
 * @s: string to be filled
 * @str_input: filler string
 * @position: position in s to start filling
 * Return: next position
 *
 */
int fill_str(char *s, char *str_input, int position)
{
	int str_length = 0;
	int index = 0;

	str_length = _strlen(str_input);

	while (index < str_length)
	{
		s[position] = str_input[index];
		position = position + 1;
		index = index + 1;
	}
	s[position] = '\n';

	return (position + 1);
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

