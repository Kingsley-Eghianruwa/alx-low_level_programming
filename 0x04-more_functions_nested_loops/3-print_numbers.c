#include "main.h"

/**
 * print_numbers - prints numbers 0 - 9
 * Return: null
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
		i = i + 1;
	}
	_putchar('\n');
}
