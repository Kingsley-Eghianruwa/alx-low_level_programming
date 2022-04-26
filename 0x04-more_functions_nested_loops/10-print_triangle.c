#include "main.h"
/**
 * out_liner - prints a pattern on a line
 * @n: integer
 * Return: void
 */

void out_liner(int n, int i)
{
	int p;

	p = n - i;
	while (p > 0)
	{
		_putchar(' ');
		p = p - 1;
	}

	while (i > 0)
	{
		_putchar('#');
		i = i - 1;
	}
}
/**
 * print_triangle - prints a triangle pattern
 * @n: integer
 * Return: void
 */

void print_triangle(int n)
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
			out_liner(n,i);
			_putchar('\n');
			i = i + 1;
		}
	}
}

			
