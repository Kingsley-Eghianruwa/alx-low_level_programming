#include "main.h"

/**
 * factorial - calculate factorial of integer
 * @n: input interger
 *
 * Description: null
 * Return: integer
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
