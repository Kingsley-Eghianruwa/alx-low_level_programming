#include "main.h"

int main(int argc, __attribute__((unused)) char *argv[])
{
	int value;

	value = argc - 1;
	_putchar(value + '0');
	_putchar('\n');
	return (0);
}
