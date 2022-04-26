#include <stdio.h>
#include "main.h"

/**
 * _isfactor - determines if a prime is a factor
 * @n: long interger
 * @a: long integer
 * @b: long integer
 * Return: integer
 */

int _isfactor(long n, long a, long b)
{
	if (n % a == 0)
	{
		return (1);
	}
	else if (n % b == 0)
	{
		return (2);
	}
	else
	{
		return (-1);
	}
}

/**
 * largest_prime - outputs the largest prime factor of an input
 * @n: long integer
 * Return: long
 */

long largest_prime(long n)
{
	int flag_f;
	long largest_prime_factor;
	int i;
	long a;
	long b;

	i = 1;
	a = 0;
	b = 0;
	largest_prime_factor = 0;
	flag_f = 0;

	while (i <= n)
	{
		a = (6 * i) - 1;
		b = (6 * i) + 1;
		flag_f = _isfactor(n, a, b);
		if (flag_f == 1 && a > largest_prime_factor)
		{
			largest_prime_factor = a;
			n = n / a;
		}
		else if (flag_f == 2 && b > largest_prime_factor)
		{
			largest_prime_factor = b;
			n = n / b;
		}
		else
		{
			;
		}
		i = i + 1;
	}
	return (largest_prime_factor);
}

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	long out;

	out = largest_prime(612852475143);
	printf("%ld\n", out);
	return (0);
}
