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
* _strcmp - compares string s2 to string s1
* @s1: string s1
* @s2: string s2
* Return: int value of ASCII difference
*/

int _strcmp(char *s1, char *s2)
{
	int s2_string_length;
	int loop_index;
	int char_diff;

	char_diff = 0;
	loop_index = 0;
	s2_string_length = _strlen(s2);
	while (s1[loop_index] != '\0' || s2[loop_index] != '\0')
	{
		char_diff = s1[loop_index] - s2[loop_index];
		if (char_diff != 0 || loop_index > s2_string_length)
		{
			break;
		}
		loop_index = loop_index + 1;
	}
	return (char_diff);
}
