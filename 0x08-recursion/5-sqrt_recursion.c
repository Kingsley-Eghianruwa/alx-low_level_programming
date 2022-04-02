#include "main.h"

/**
 * root_finder - finds integer root by unkwon method
 * @a: root integer
 * @b: square integer
 *
 * Description: null
 * Return: interger, -1
 */

int root_finder(int a, int b)
{
	if ((a * a) == b)
	{
		return (a);
	}
	else if (a <= 0)
	{
		return (-1);
	}
	else
	{
		return (root_finder((a - 1), b));
	}
}

/**
 * _sqrt_recursion - driver method
 * @n: square integer
 *
 * Description: null
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (root_finder((n / 2), n));
	}
}

