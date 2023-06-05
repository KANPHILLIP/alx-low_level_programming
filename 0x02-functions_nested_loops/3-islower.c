#include "main.h"

/**
 * _islower - checks if a character is a lower case
 * @c: check character
 * Return: 1 is a character is lower case and 0 if anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
