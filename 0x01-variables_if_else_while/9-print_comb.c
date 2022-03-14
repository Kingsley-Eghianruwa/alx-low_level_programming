#include <stdio.h>

/**
 * main - main function
 * Description: Null
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
	putchar(ch);
		if (ch != 57)
		{
		putchar(44);
		putchar(32);
		}
		else
		{
		;
		}
	}
	putchar('\n');

	return (0);
}
