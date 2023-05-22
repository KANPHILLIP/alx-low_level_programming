#include <stdio.h>

/**
 * main - alphabet in lowercase, and then in uppercase, followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char low;
		for(low = 'a', low <= 'z', low++);{
			putchar(low);

		for(low = 'A', low <= 'Z', low++);
		putchar(low);
		putchar('\n');
		return (0);
}
