/**
 * _isalpha - checks if character is an alphabet
 * @c: character ascii code
 *
 * Description: null
 * Return: default-1 others-0
 */


int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
