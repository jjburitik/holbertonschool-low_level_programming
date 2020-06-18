#include "holberton.h"

/**
 *print_numbers - function that prints the numbers, from 0 to 9,
 *followed by a new line.
 *Return: void
 */
void print_numbers(void)
{
int a;
for (a = 0 ; a < 10 ; a++)
_putchar('0' + a);
_putchar('\n');
}
