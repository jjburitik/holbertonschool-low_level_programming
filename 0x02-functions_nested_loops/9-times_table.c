#include "holberton.h"

/**
 *times_table - function that prints the 9 times table, starting with 0.,
 *
 *Return: void
 */
void times_table(void)
{
int x, y;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
if ((x * y > 9))
{
_putchar('0' + ((x * y) / 10));
_putchar('0' + ((x * y) % 10));
}
else
{
_putchar(' ');
_putchar('0' + ((x * y) % 10));
}
if (y < 9)
{
_putchar(',');
_putchar(' ');
}
else
_putchar('\n');
}
}
}
