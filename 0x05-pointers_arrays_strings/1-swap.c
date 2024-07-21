#include "main.h"

/**
 * swap_int - a function to swap to number
 * @a: number to swaped
 * @b: number to swaped
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
