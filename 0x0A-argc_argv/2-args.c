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
 * _putstring - prints a string using alx's _putchar
 * @s: input string
 * Return: void
 */

void _putstring(char *s)
{
	int index = 0;
	int s_length;

	s_length = _strlen(s) - 1;
	while (index <= s_length)
	{
		_putchar(s[index]);
		index = index + 1;
	}
}

/**
 * main - prints all parameters passed to function
 * @argc: argument counter
 * @argv: argument vector
 * Return: function returns 0
 */

int main(int argc, char *argv[])
{
	int index = 0;
	int value;

	value = argc - 1;
	while (index <= value)
	{
		_putstring(argv[index]);
		_putchar('\n');
		index = index + 1;
	}
	return (0);
}
