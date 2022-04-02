#include "main.h"

/**
 * _strlen_recursion - outputs the length of string
 * @s: string pointer
 *
 * Description: null
 * Return: integer
 */


int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(++s));
	}
	else
	{
		return (0);
	}
}
