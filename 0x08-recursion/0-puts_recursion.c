#include "main.h"



/**
 * _puts_recursion - recursive puts a sting.
 * @s: string pointer
 *
 * Description: null
 * Return: null
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*(s));
		_puts_recursion((s + 1));
	}
	else
	{
		_putchar('\n');
	}

}

