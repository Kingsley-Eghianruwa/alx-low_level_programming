#include "main.h"

/**
* reverse_array - reverses the elemts of an array of integers
* @a: int pointer to array
* @n: number of elemts in array i.e length of the array
* Return: void
*/

void reverse_array(int *a, int n)
{
	int loop_index = 0;
	int tmp = 0;

	while (loop_index <= n / 2)
	{
		tmp = a[loop_index];
		a[loop_index] = a[(n - 1) - loop_index];
		a[n - loop_index] = tmp;
		loop_index = loop_index + 1;
	}
}
