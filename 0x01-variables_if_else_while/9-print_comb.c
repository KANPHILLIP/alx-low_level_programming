#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int num;

	while (0 < 10)
	{
		putchar(48 + num);
		if (num != 9)
		{
		putchar(',');
		putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
