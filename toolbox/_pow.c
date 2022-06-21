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
