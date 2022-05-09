#include "main.h"

/**
* leeter - return the corresponding leet character
* @x: input char
* Return: leet character
*/

char leeter(char x)
{
	char leet_in_array[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet_out_array[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int loop_index;
	char leet_out;

	loop_index = 0;
	leet_out = x;
	while (loop_index <= 9)
	{
		if (x == leet_in_array[loop_index])
		{
			leet_out = leet_out_array[loop_index];
			break;
		}
		else
		{
			loop_index = loop_index + 1;
		}
	}
	return (leet_out);
}

/**
* leet - leet's a string
* @s: input string
* Return: point to string
*/

char *leet(char *s)
{
	int loop_index = 0;

	while (s[loop_index] != '\0')
	{
		s[loop_index] = leeter(s[loop_index]);
		loop_index = loop_index + 1;
	}
	return (s);
}

