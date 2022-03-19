#include "main.h"

/**
 * print_sign - print sign of an interger
 * @n: interger
 *
 * Description: null
 * Return: 1 for +, 0 for 0 and -1 for -
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
