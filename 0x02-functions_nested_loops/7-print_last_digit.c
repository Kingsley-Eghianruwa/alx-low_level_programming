#include "main.h"

/**
 * print_last_digit - prints last digit of an interger
 * @n: interger
 *
 * Description: null
 * Return: last digit
 */

int print_last_digit(int n)
{
	int tmp;

	tmp = _abs(n) % 10;
	_putchar('0' + tmp);
	return (tmp);
}

/**
 * _abs - abs function
 * @n: interger
 *
 * Description: null
 * Return: abs value
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
