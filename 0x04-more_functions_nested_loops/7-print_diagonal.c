#include "main.h"

/**
 * print_diagonal - prints the a back-slash n times
 * @n: integer
 * Return: void
 */

void print_diagonal(int n)
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
			print_space(i - 1);
			_putchar('\\');
			_putchar('\n');
			i = i + 1;
		}

	}
}

/**
 * print_space - prints the a space n times
 * @n: integer
 * Return: void
 */

void print_space(int n)
{
	int i;

	i = 1;

	if (n == 0)
	{
		;
	}
	else
	{
		while (i <= n)
		{
			_putchar(' ');
			i = i + 1;
		}
	}
}

