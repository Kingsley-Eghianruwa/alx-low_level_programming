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
	putchar(44);
	putchar(32);
	}
	putchar('\n');

	return (0);
}
