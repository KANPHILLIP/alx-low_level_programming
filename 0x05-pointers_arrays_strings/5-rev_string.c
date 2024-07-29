#include "main.h"
#include <string.h>

/**
 * rev_string - a function that reverses a string
 * @s: the string to be reversed
 * Return: Nothing
 */
void rev_string(char *s)
{
    int i;
    int count = 0;
    char temp;

    for (i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
 
    for (i = 0; i < count / 2; i++)
    {
        temp = s[i];
        s[i] = s[count - 1 - i];
        s[count - 1 - i] = temp;
    }
}
