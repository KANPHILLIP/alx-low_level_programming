#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; 0 <= 9; num++)
	{
		putchar(num);
	}
		for (letter = 'a'; 'a' <= 'f'; letter++)
		{
			putchar(letter);
		}

	putchar('\n');
	return (0);
}
