#include "holberton.h"

/**
 *_isdigit - function that checks for digit character.
 *@c: character to check
 *Return: 1 for digit, 0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
