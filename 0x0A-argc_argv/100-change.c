#include "main.h"

/**
 * main - main function to determine change
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int remainder;
	int count = 0;
	int index = 0;
	int change;
	int exit_code = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		exit_code = 1;
		return (exit_code);
	}

	change = _string2int(argv[1]);

	if (change < 0)
	{
		printf("%d\n", 0);
		return (exit_code);
	}

	while (index <= 4)
	{
		remainder = change % coins[index];
		count = count + (change / coins[index]);

		if (remainder != 0)
		{
			index = index + 1;
			change = remainder;
			remainder = 0;
		}
		else
		{
			break;
		}
	}

	printf("%d\n", count);
	return (0);
}



/**
 * _string2int - convert a string of numbers to integer
 * @s: input string
 * Return: int
 */

int _string2int(char *s)
{
	int digit_index = 0;
	int sign_flag = 1;
	int count = 0;
	int index;
	int digit_array[10] = {0};
	int power = 0;

	index = strlen(s) - 1;
	while (index >= 0)
	{
		if (s[index] == '-')
		{
			sign_flag = -1;
		}
		else
		{
			digit_array[digit_index] = (int)s[index] - 48;
		}
		index = index - 1;
		digit_index = digit_index + 1;
	}

	while (power <= 9)
	{
		count = count + digit_array[power] * _pow(10, power);
		power = power + 1;
	}

	return (count * sign_flag);
}
#include "main.h"

/**
 * _pow - power function
 * @base: base
 * @exp: exponent
 * Return: 0 if exp == 0 else base^exp
 */

int _pow(int base, int exp)
{
	int result = 1;

	if (exp == 0)
	{
		return (1);
	}

	while (exp > 0)
	{
		result = result * base;
		exp = exp - 1;
	}
	return (result);
}
