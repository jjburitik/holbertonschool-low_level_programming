#include "holberton.h"
/**
 *print_line - function that draws a straight line in the terminal.
 *@n: is the number of times the character _ should be printed
 *
 *Return: void
 */
void print_line(int n)
{
int a = 0;
while (a < n)
{
_putchar('_');
a++;
}
_putchar('\n');
}
