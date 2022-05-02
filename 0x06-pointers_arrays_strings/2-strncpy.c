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
* _strncpy - overwrite dest string with n char from src string
* @dest: destination string
* @src: source string
* @n: number of characters to copy
* Return: pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
/* ------------- Variable Decleration --------------------------*/
	int src_string_length;
	int loop_index;
/*----------------------------------------------------------------*/

	src_string_length = _strlen(src);
	loop_index = 0;

	while (loop_index <= (n - 1))
	{
		if (loop_index > src_string_length)
		{
			dest[loop_index] = '\0';
			loop_index = loop_index + 1;
		}
		else
		{
			dest[loop_index] = src[loop_index];
			loop_index = loop_index + 1;
		}
	}
	return (dest);
}

