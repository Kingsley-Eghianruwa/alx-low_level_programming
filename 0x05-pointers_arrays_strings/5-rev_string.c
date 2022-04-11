#include "main.h"
#include <stddef.h>

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

char *rev_str(char *s)
{
	int slen;
	int i = 0;
	char *tmp;

	slen = _strlen(s) - 1;
	while (slen >=  0)
	{
		*(tmp + i) = *(s + slen);	
		i++;
		if (slen == 0)
		{
			break;
		}
		else
		{
			slen--;
		}
	}
	tmp_ptr = tmp;
	return (tmp_ptr);
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
	s = rev_str(s);
}

