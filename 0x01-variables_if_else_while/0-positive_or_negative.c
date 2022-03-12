#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - the main function
 * Descrption: NULL
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
	char msg[] = "is negative";

	printf("%d %s\n", n, msg);
	}
	else if (n == 0)
	{
	char msg[] = "is zero";

	printf("%d %s\n", n, msg);
	}
	else
	{
	char msg[] = "is positive";

	printf("%d %s\n", n, msg);
	}
	return (0);
}


