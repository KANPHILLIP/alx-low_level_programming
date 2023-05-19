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
	long int l;
	long long int k;

	printf("long int size:%zu", sizeof (l));
	printf("long long int size:%zu", sizeof (k));
	printf("int size:%zu", sizeof(a));
	printf("float size:%zu", sizeof (b));
	printf("char size:%zu", sizeof (ch));
	printf("double size:%zu", sizeof (d));
	return (0);
}
