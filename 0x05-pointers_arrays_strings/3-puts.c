#include "holberton.h"
/**
 *_puts - function that prints a string, followed by a new line, to stdout.
 *@str: String to be printed
 *
 *Return: void
 */
void _puts(char *str)
{
char *a;

a = str;
while (*a != '\0')
{
_putchar(*a);
a++;
}
_putchar('\n');
}
