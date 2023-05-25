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

		while ('a' <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	_putchar('\n');
	return (0);
}
