#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets
 *
 * Description: null
 * Return: null
 */
void print_alphabet_x10(void)

{	int i;
	char ch;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
}
