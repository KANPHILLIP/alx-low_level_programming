#include "main.h"

/**
 * more_numbers - 10 times the numbers
 * Return: void
 */
void more_numbers(void)
{
	char c, f;

	for (c = '0'; '0' <= 10; c++)
	{
		for (f = '0'; '0' <= 14; f++)
		{
			_putchar(f);
		}
		_putchar(c);
	}
	_putchar('\n');
}

