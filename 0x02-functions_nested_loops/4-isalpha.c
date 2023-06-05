#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: check for alphabetic characters
 * Return: 1 if a character is lower case or uppercase or 0 if anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

