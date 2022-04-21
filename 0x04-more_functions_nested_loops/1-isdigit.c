#include "main.h"

/**
 * _isdigit - determines if character is a digit
 * @c: integer ASCII digit.
 * Return: 1 if c is an ASCII digit else 0
 */

int _isdigit(int c);
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
