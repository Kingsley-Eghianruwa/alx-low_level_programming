#include "main.h"

/**
* rot13_upper - rot13 for upper case char
* @c: input char
* Return: char
*/
char rot13_upper(char c)
{
	c = 'A' + ((c - 'A' + 13) % 26);
	return (c);
}

/**
* rot13_lower - rot13 for lower case char
* @c: input char
* Return: char
*/

char rot13_lower(char c)
{
	c = 'a' + ((c - 'a' + 13) % 26);
	return (c);
}

/**
* rot13_symbols - rot13 for non-alpha char
* @c: input char
* Return: returns the input char
*/
char rot13_symbols(char c)
{
	return (c);
}

/**
* rot13er - outputs a required flag depending on input char
* @x: input char
* Return: int flag: 0 for upper case, 1 for lower amd 2 for symbols
*/
int rot13er(char x)
{
	int loop_index = 0;
	int out = 2;
	char str_char_case[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str_char_flag[] = "0000000000000000000000000011111111111111111111111111";

	while (loop_index <= 51)
	{
		if (x == str_char_case[loop_index])
		{
			out = (int)str_char_flag[loop_index] - 48;
			break;
		}
		loop_index = loop_index + 1;
	}
	return (out);
}

/**
* rot13 - converts a string under ROT13
* @s: input string
* Return: pointer to string
*/
char *rot13(char *s)
{
	int loop_index = 0;
	int flag;

	static char (* const rot13_table[3])(char) = {rot13_upper,
							rot13_lower, rot13_symbols};

	while (s[loop_index] != '\0')
	{
		flag = rot13er(s[loop_index]);
		s[loop_index] = (*rot13_table[flag])(s[loop_index]);
		loop_index = loop_index + 1;
	}
	return (s);
}

