#include "main.h"

/**
 * print_line - prints the a line n times
 * @n: integer
 * Return: void
 */

void print_line(int n)
{
	int i;

	i = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			_putchar('_');
			i = i + 1;
		}
		_putchar('\n');
	}
}

