#include "main.h"


/**
 * _strlen - finds the length of a string
 * @s: string pointer
 *
 * Description: null
 * Return: interger
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}

/**
 * rev_str - outputs a string in reverse of input string
 * @s: string pointer
 *
 * Description: null
 * Return: char*
 */

void rev_str(char *s)
{
	int slen;
	int i = 0;
	char tmp = 0;

	slen = _strlen(s) - 1;
	while (i <= (slen / 2))
	{
		tmp = s[i];
		s[i] = s[slen - i];
		s[slen - i] = tmp;
		i = i + 1;
	}

}

/**
 * rev_string - reverses a string
 * @s: string pointer
 *
 * Description: null
 * Return: null
 */

void rev_string(char *s)
{
	rev_str(s);
}

