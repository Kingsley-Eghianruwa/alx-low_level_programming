/**
 * _islower - check if character is lower case
 * @c: ascii code for character
 *
 * Description: null
 * Return: default-1 others-0
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
