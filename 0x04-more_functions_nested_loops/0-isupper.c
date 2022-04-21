#include "main.h"

/**
 * _isupper - determines is character is lower or upper case
 * @c: character ASCII integer value
 * Return: 1 if upper else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
