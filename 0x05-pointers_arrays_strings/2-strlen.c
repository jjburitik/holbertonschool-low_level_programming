#include "holberton.h"
/**
 *_strlen - function that returns the length of a string.
 *@s: The string to which its length is searched
 *
 *Return: length of a string
 */
int _strlen(char *s)
{
char *a;
int length = 0;

a = s;
while (*a != '\0')
{
length++;
a++;
}
return (length);
}
