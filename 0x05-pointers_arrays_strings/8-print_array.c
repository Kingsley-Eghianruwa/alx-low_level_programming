#include <stdio.h>
#include "main.h"

/**
 * print_array - print n values fron an array
 * @a: int pointer to array
 * @n:  integer
 * Return: void
 */

void print_array(int *a, int n)
{
	int loop_index = 0;
	int max_array_index;
	int *t;

	t = &(*a);
	max_array_index = n - 1;
	while (loop_index <= max_array_index)
	{
		printf("%d", *t);
		t = t + 1;
		if (loop_index == max_array_index)
		{
			;
		}
		else
		{
			printf(", ");
		}
		loop_index = loop_index + 1;
	}
	printf("\n");
}
