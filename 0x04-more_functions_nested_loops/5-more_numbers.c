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
	int n;

	i = 0;
	while (i <= 14)
	{
		n = i;

		if (n >= 10 && n <= 14)
		{
			callputchar('1');
			n = (n % 10);
		}
		callputchar(n + '0');
		i = i + 1;
	}
	callputchar('\n');
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
