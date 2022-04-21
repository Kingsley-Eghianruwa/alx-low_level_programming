#include "main.h"

/**
 * print_number - prints numbers 0 - 9
 * Return: null
 */

void print_number(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i);
		i = i + 1;
	}
	_putchar('\n');
}
