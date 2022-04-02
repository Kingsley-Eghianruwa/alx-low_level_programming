#include "main.h"

/**
 * str_rev_recursion - print reverse a string via recursion
 * @s: string pointer input
 *
 * Desccription: null
 * Return: null
 */

void str_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		str_rev_recursion(++s);
		_putchar(*(s - 1));
	}
}


/**
 * _print_rev_recursion - as above
 * @s: as above
 *
 * Description: null
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	str_rev_recursion(s);
	/* _putchar('\n'); */
}

