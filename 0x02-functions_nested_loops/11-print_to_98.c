#include "holberton.h"
/**
 *print_to_98 - function that prints all natural numbers from n to 98
 *@n: first number
 *Return: void
 */
void print_to_98(int n)
{
int x;
if (n < 99)
{
for (x = n; x < 99; x++)
{
if (x >= 0)
{
if (x < 10)
_putchar('0' + x);
else
{
_putchar('0' + (x  / 10));
_putchar('0' + (x  % 10));
}
}
else
{
if (x > -10)
{
_putchar('-');
_putchar('0' - x);
}
else
{
_putchar('-');
_putchar('0' - (x  / 10));
_putchar('0' - (x  % 10));
}
}
if (x != 98)
{
_putchar(',');
_putchar(' ');
}
else
_putchar('\n');
}
}
else
{
for (x = n; x >= 98; x--)
{
if (x > 99)
{
_putchar('0' + x / 100);
_putchar('0' + x / 10 % 10);
_putchar('0' + x % 10);
}
else
{
_putchar('0' + x / 10);
_putchar('0' + x % 10);
}
if (x != 98)
{
_putchar(',');
_putchar(' ');
}
else
_putchar('\n');
}
}
}
