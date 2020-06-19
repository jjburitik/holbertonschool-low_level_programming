#include "holberton.h"
/**
 *print_square - function that prints a square, followed by a new line.
 *@size: is the size of the square
 *
 *Return: void
 */
void print_square(int size)
{
int control, size2;
if (size < 1)
_putchar('\n');
for (size2 = size; size2 > 0; size2--)
{
for (control = size; control > 0; control--)
_putchar('#');
_putchar('\n');
}
}
