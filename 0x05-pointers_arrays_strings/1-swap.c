#include "main.h"

/**
 * swap_int - swaps two intergers
 * @a: first interger
 * @b: second interger
 *
 * Description: null
 * Return: null
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b =  tmp;
}
