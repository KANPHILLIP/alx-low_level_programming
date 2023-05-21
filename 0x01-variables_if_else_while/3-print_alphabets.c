#include <stdio.h>

/**
 * main - alphabet in lowercase, and then in uppercase, followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
