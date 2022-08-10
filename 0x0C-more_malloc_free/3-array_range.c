#include "main.h"

/**
 * array_range - creates array from min (included) to max (included), ordered.
 * @min: min value(integer)
 * @max: max vale(integer)
 * Return: pointer to array/NULL if min > max or malloc fails
 */

int *array_range(int min, int max)
{
	int size;
	int number_of_elements;
	int mem;
	int *array = NULL;
	int index = 0;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		number_of_elements = max - min + 1;
		size = sizeof(int);
		mem = size * number_of_elements;
	}
	array = malloc(mem);
	if (array == NULL)
	{
		return (NULL);
	}
	while (index <= number_of_elements - 1)
	{
		array[index] = index + min;
		index = index + 1;
	}

	return (array);
}
