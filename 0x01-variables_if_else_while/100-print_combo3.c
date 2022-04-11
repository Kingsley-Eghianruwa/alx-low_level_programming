#include <stdio.h>

/**
 * main - main function
 * Description: Null
 * Return: 0
 */

int main(void)
{
	int ch;
	int ch2;

	for (ch = 48; ch <= 57; ch++)
	{
		for (ch2 = 48; ch2 <= 57; ch2++)
		{
			if (ch == ch2)
			{
			;
			}
			else
			{
			putchar(ch);	
			putchar(ch2);
			putchar(44);
			putchar(32);
			}
			
		}
	}
	putchar('\n');

	return (0);
}
