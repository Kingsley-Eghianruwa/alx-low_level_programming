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
		if (ch == 'e' || ch == 'q')
		{
		asm("nop");
		}
		else
		{
		putchar(ch);
		}
	}

	putchar('\n');

	return (0);
}
