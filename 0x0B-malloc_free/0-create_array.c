#include "main.h"

/**
 * create_array - creates an array and fills it with a character
 * @size: size of the array
 * @c: charcter to fill the array with
 * Return: pointer to the array or NULL if size = 0 or malloc fails
 */

char *create_array(unsigned int size, char c)
{
	char *char_array;
	unsigned int index = 0;

	if (size == 0)
	{
		return (NULL);
	}

	char_array = malloc(size * sizeof(char));

	if (char_array == NULL)
	{
		return (NULL);
	}

	while (index < size)
	{
		char_array[index] = c;
		index = index + 1;
	}

	return (char_array);
}
