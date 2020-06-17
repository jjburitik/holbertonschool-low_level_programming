#include "holberton.h"
#include <stdlib.h>
/**
 *print_to_98 - function that prints all natural numbers from n to 98
 *@n: first number
 *Return: void
 */
void print_to_98(int n)
{
int a, b, c, d;
while (n != 98)
{
a = abs(n), b = a / 100, c = a / 10 % 10, d = a  % 10;
if (b > 0)
{
a != n ? _putchar('-') : a;
_putchar('0' + b);
_putchar('0' + c);
_putchar('0' + d);
}
else if (c > 0)
{
a != n ? _putchar('-') : a;
_putchar('0' + c);
_putchar('0' + d);
}
else
{
a != n ? _putchar('-') : a;
_putchar('0' + d);
}
_putchar(',');
_putchar(' ');
n < 98 ? n++ : n--;
}
_putchar('9');
_putchar('8');
_putchar('\n');
}
