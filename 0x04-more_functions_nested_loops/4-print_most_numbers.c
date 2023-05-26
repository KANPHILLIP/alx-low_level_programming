#include "main.h"

/**
 *  print_most_numbers - print number 0-9
 *  Return: void
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; '0' <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
		_putchar(0);
	}
	_putchar('\n');
}

