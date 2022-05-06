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
* isseparator - checks if char is a separator
* @a: input character
* Return: 1 if a separator; 0 if not
*/

int isseparator(char a)
{
	char separator_array[13];
	int loop_index = 0;
	int function_output = 0;/* default - char is not a separator */

	separator_array[0] = 0x20;
	separator_array[1] = 0x09;
	separator_array[2] = 0x0a;
	separator_array[3] = 0x2c;
	separator_array[4] = 0x3b;
	separator_array[5] = 0x2e;
	separator_array[6] = 0x21;
	separator_array[7] = 0x3f;
	separator_array[8] = 0x22;
	separator_array[9] = 0x28;
	separator_array[10] = 0x29;
	separator_array[11] = 0x7b;
	separator_array[12] = 0x7d;

	while (loop_index <= 12)
	{
		if (a == separator_array[loop_index])
		{
			function_output = 1;/* char is a separator */
			break;
		}
		else
		{
			loop_index = loop_index + 1;
		}
	}
	return (function_output);
}

/**
* cap_string - changes to string to capitalize every word
* @s: input string
* Return: pointer to string
*/

char *cap_string(char *s)
{
	int s_string_lehgth;
	int loop_index;
	int flag_this_char = 0;
	int flag_next_char = 0;

	s_string_lehgth = _strlen(s) - 1;
	loop_index = 0;
	while (loop_index <= s_string_lehgth && s[loop_index] != '\0')
	{
		flag_this_char = isseparator(s[loop_index]);
		flag_next_char = isseparator(s[loop_index + 1]);

		if (flag_this_char == 1 && flag_next_char == 0)
		{
			if (s[loop_index + 1] >= 'a' && s[loop_index] <= 'z')
			{
				s[loop_index + 1] = s[loop_index + 1] - 32;
			}
		}
		loop_index = loop_index + 1;
	}
	return (s);
}
