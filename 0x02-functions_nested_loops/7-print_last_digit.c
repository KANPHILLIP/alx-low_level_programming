#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @c: checks the last digit"
 * Return: last digit of a number or zero
 */
int print_last_digit(int c)
{
	int last;
		last = c % 10;
		if (last < 0)
		{
			last = last * -1;
		}
		_putchar(last + '0');
		return (last);
}

