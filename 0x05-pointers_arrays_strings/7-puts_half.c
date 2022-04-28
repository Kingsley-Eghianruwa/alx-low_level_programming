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
 * puts_half - outputs tail half of a string
 * str: inputstring
 * Return: void
 */

void puts_half(char *str)
{
	int string_length;
	int string_index;
	int loop_index;
	int string_print_length;

	string_length = _strlen(str);
	string_index = string_length - 1;

	if (string_length % 2 == 0)
	{
		string_print_length = string_length / 2;
	}
	else
	{
		string_print_length = (string_length - 1) / 2;
	}

	loop_index = string_length - string_print_length;
	
	while (loop_index <= string_index)
	{
		_putchar(str[loop_index]);
		loop_index = loop_index + 1;
	}
	_putchar('\n');
}


		
