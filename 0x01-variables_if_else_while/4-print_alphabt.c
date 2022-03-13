#include <stdio.h>

/**
 * main - main function
 * Description: Null
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'p')
		{
		putchar('\0');
		}
		else
		{
		putchar(ch);
		}
	}

	putchar('\n');

	return (0);
}
