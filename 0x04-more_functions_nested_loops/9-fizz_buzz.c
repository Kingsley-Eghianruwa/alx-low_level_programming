#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - print 1 to 100 and replaces multiples of 3 and 5
 * Description: null
 * Return: void
 */

void fizz_buzz(void)
{
	int i;
	char *buzz = "Buzz";
	char *fizz = "Fizz";
	char *fizz_buzz = "FizzBuzz";

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", fizz_buzz);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", buzz);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", fizz);
		}
		else
		{
			printf("%d ", i);
		}
		i = i + 1;
	}
	printf("\n");
}

/**
 * main - main function
 * Description: null
 * Return: 0
 */

int main(void)
{
	fizz_buzz();
	return (0);
}
