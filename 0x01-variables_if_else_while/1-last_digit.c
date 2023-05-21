#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
		if (a > 5)
		{
			printf("Last digit %d is %d and is greater than 5\n", a, n);
		}
		else if (a == 0)
		{
			printf("Last digit %d is %d is 0: the string and is 0\n", a, n);
		}
		else
		{
			printf("Last digit %d is %d and is less than 6 and not 0\n", a, n);
		}
	return (0);
}
