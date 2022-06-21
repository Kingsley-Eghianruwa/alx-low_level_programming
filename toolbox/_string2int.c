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

	index = _strlen(s) - 1;
	while (index >= 0)
	{
		if (s[index] == '-')
		{
			sign_flag = -1
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
