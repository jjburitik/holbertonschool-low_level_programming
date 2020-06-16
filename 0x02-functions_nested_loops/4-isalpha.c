#include "holberton.h"

/**
 *_islower - function that checks for alphabetic character
 *@c: character to check
 *Return: 1 lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
