/**
 * _puts_recursion - recursive puts a sting.
 * @s: string pointer
 *
 * Description: null
 * Return: null
 */

void _puts_recursion(char s)
{
	_putchar(*s);
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_puts_recursion(*(s++));
	}
}
