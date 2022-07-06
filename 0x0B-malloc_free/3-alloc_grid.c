#include "main.h"

/**
 * alloc_grid - creates a 2D int  array
 * @width: number of elements in sub array
 * @height: number of sub array
 * Return: pointer to 2d array or NULL if height||width = 0, malloc fails
 */
int **alloc_grid(int width, int height)/*---*/
{
	int index = 0;

	if (height > 0 && width > 0)/*---*/
	{
		int **arr;

		arr = malloc(sizeof(int *) * height);

		if (arr == NULL)
		{
			return (NULL);
		}

		while (index < width) /*---*/
		{
			arr[index] = malloc(width * sizeof(int));
			if (arr[index] == NULL)
			{
				return (NULL);
			}
			arr[index] = int_memset(arr[index], 0, width);
			index = index + 1;
		} /*...*/
		return (arr);
	}
	else
	{
		return (NULL);
	} /*...*/
} /*...*/


/**
 * int_memset - fills n-wide array with int b
 * @s: input pointer to array
 * @b: input int to fill with
 * @n: width of array
 * Return: pointer to array
 */

int *int_memset(int *s, int b, int n) /*---*/
{
	int index = 0;

	while (index <= (n - 1))
	{
		s[index] = b;
		index = index + 1;
	}
	return (s);
} /*...*/
