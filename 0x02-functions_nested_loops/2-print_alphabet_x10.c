#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'a';
	char n;

		while ('a' <= 'z')
		{
			_putchar(letter);
			n = 0;
				if (n < 10)
				{
					_putchar(n);
					n++;
		}
				letter++;
		}
	_putchar('\n');
	return (0);
}
