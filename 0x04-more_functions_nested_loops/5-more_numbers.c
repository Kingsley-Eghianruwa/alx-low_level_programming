#include "main.h"

/**
 * callputchar - calls the _putchar() function
 * @c: input char
 * Return: null
 */
void callputchar(char c)
{
	_putchar(c);
}
/**
 * printLineFunc - print numbers 1 - 14 on a line
 * Return: null
 */

void printLineFunc(void)
{
	int i;

	i = 0;
	while (i <= 14)
	{
		if (i >= 10 && i <= 14)
		{
		/*	callputchar('1'); */
		/*	callputchar((i % 10) + '0'); */
		}
		else
		{
			_putchar(i + '0');
		}
		i = i + 1;
	}
	_putchar('\n');
}

/**
 * more_numbers - calls the printLineFunc 10 times
 * Return: null
 */

void more_numbers(void)
{
	int i;

	i = 1;
	while (i <= 10)
	{
		printLineFunc();
		i = i + 1;
	}
}
