#include "main.h"

/**
 * alloc_grid - creates a 2D int  array
 * @width: number of elements in sub array
 * @height: number of sub array
 * Return: pointer to 2d array or NULL if height||width = 0, malloc fails
 */
int **alloc_grid(int width, int height)/*---*/
{
	if (height > 0 && width > 0)/*---*/
	{
		int **buffer = NULL;
		int index = 0;

		buffer = malloc(sizeof(int *) * height);
		if (buffer == NULL)
		{
			return (NULL);
		}
		while (index < height)
		{
			buffer[index] = malloc(width * sizeof(int));
			if (buffer[index] == NULL)
			{
				freemem(buffer, index);
				return (NULL);
			}
			int_memset(buffer[index], 0, width);
			index = index + 1;
		}
		return (buffer);
	} /*...*/
	else
	{
		return (NULL);
	}
} /*...*/


/**
 * int_memset - fills n-wide array with int b
 * @s: input pointer to array
 * @b: input int to fill with
 * @n: width of array
 * Return: pointer to array
 */

void int_memset(int *s, int b, int n) /*---*/
{
	int index = 0;

	while (index < n)
	{
		s[index] = b;
		index = index + 1;
	}
} /*...*/

/**
 * freemem - frees memory allocated by malloc
 * @B: input buffer
 * @n: index at which malloc failed
 * Return: void
 */
void freemem(int **B, int n)
{
	int index = n;

	while (index >= 0)
	{
		free(B[index]);
		index = index - 1;
	}
	free(B);
}
