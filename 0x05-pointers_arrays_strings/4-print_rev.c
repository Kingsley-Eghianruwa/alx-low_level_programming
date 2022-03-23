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
 * print_rev - prints a string in reverse
 * @s: string pointer
 *
 * Description: null
 * Return: void
 */

void print_rev(char *s)
{
	int slen;

	slen = _strlen(s) - 1;
	while (slen >=  0)
	{
		_putchar(*(s + slen));
		if (slen == 0)
		{
			break;
		}
		else
		{
			slen--;
		}
	}
	_putchar('\n');
}
