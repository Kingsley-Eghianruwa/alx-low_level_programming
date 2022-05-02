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
* string_toupper - changes lower case char in string to upper case.
* @s: input string.
* Return: pointer to input string.
*/

char *string_toupper(char *s)
{
	int s_string_length;
	int loop_index;

	loop_index = 0;
	s_string_length = _strlen(s);
	while (loop_index <= s_string_length)
	{
		if (s[loop_index] >= 'a' && s[loop_index] <= 'z')
		{
			s[loop_index] = s[loop_index] - 32;
		}
		loop_index = loop_index + 1;
	}
	return (s);
}

