#include "main.h"

/**
 * out_line - prints the # n times in a line
 * @n: integer
 * Return: void
 */

void out_line(int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		_putchar('#');
		i = i + 1;
	}
	_putchar('\n');

}
/**
 * print_square - prints the # in a n by n sqaure
 * @n: integer
 * Return: void
 */

void print_square(int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		out_line(n);
		i = i + 1;
	}
}
