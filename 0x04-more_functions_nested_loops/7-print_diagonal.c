#include "holberton.h"
/**
 *print_diagonal - function that draws a diagonal line on the terminal.
 *@n: is the number of times the character \ should be printed
 *
 *Return: void
 */
void print_diagonal(int n)
{
int control, spaces;
for (control = 0 ; control < n; control++)
{
for (spaces = 0 ; spaces < control; spaces++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}
