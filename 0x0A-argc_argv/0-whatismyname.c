#include "main.h"

/**
 * main - main function that prints its name
 * @argc: argument counter: not used
 * @argv: argument vector
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int string_length = 0;
	int index = 0;

	(void)argc;
	string_length = _strlen(argv[0]) - 1;
	while (index <= string_length)
	{
		_putchar(argv[0][index]);
		index = index + 1;
	}
	_putchar('\n');
	return (0);
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

