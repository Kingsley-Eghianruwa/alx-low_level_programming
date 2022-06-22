#include "main.h"

/**
 * main - multiplys 2 integers passed from the command line
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int mul;

	if (argc != 3)
	{
		printf("%s\n", "Error");
	}
	else
	{
		a = _string2int(argv[1]);
		b = _string2int(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
	}

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
	int pow10;

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
		pow10 = (int)(pow(10, (double)power) + 0.5);
		count = count + digit_array[power] * pow10;
		power = power + 1;
	}

	return (count * sign_flag);
}
