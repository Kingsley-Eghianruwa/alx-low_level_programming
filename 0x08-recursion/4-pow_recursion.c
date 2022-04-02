#include "main.h"

/**
 * _pow_recursion - pow function using recursion.
 * @x: interger
 * @y: pow interger
 *
 * Description: null
 * Return: interger, 1, -1
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
