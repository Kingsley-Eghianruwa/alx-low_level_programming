#include "main.h"

/**
 * print_most_numbers - prints numbers 0 - 9 excluding 2 and 4
 * Return: null
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
		_putchar(i + '0');
		}

		i = i + 1;

	}
	_putchar('\n');
}
