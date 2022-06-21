/** 
 * _putstring - prints a string using alx's _putchar 
 * * @s: input string 
 * * Return: void 
 */
void _putstring(char *s)
{	int index = 0;
	int s_length;

	s_length = _strlen(s) - 1;
	while (index <= s_length)
	{
		_putchar(s[index]);
		index = index + 1;
	}
}
