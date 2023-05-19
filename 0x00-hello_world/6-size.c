#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0 (success)
 */
int main(void)
{


	int a;
	float b;
	char ch;
	double d;

	printf("int size: %zu", sizeof(a));
	printf("float size : %zu", sizeof (b));
	printf("char size: %zu", sizeof (ch));
	printf("double size:%zu", sizeof (d));
	return (0);
}
