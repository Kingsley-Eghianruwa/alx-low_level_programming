#include "main.h"

/**
 * puts2 - outputs every other characyer in a string
 * @s: string
 * Return: void
 */
void puts2(char *s)
{
	int s_index;
	int i;

	s_index = _strlen(s) - 1;
	i = 0;
	while (i <= s_index)
	{
		_putchar(s[i]);
		i = i + 2;
	}
	_putchar('\n');
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

