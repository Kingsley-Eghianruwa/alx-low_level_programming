#include "main.h"


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


/**
 * char_checker - checks if a char is an between 0 - 9
 * @s: input string
 * Return: 1 if srting is a valid integer else -1 otherwise.
 */
int char_checker(char *s)
{
	int index;
	int _return = 1;
	int string_index;

	string_index = strlen(s) - 1;

	if (s[0] == '-')
	{
		index = 1;
	}
	else
	{
		index = 0;
	}

	while (index <= string_index)
	{
		if (s[index] >= '0' && s[index] <= '9')
		{
			index = index + 1;
		}
		else
		{
			_return = -1;
			break;
		}
	}

	return (_return);
}

/**
 * main - add function with arguments on the commandline
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 if all arguments are int, 1 if otherwise
 */

int main(int argc, char *argv[])
{
	int index = 1;
	int num_of_arguments;
	int _isint = 1;
	int value = 0;
	int exit_code = 0;
	int sum = 0;

	num_of_arguments = argc - 1;

	while (index <= num_of_arguments)
	{
		_isint = char_checker(argv[index]);

		if (_isint == -1)
		{
			printf("%s\n", "Error");
			exit_code = 1;
			break;
		}
		else
		{
			value = _string2int(argv[index]);
			sum = sum + value;
			index = index + 1;
		}

	}

	if (exit_code == 0)
	{
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		return (1);
	}
}
