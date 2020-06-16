#include "holberton.h"

/**
 *jack_bauer - function that prints every minute of the day of Jack Bauer,
 *starting from 00:00 to 23:59.
 *
 *Return: void
 */
void jack_bauer(void)
{
int hour, min;
for (hour = 0; hour < 24; hour++)
{
for (min = 0; min < 60; min++)
{
_putchar('0' + hour / 10);
_putchar('0' + hour % 10);
_putchar(':');
_putchar('0' + min / 10);
_putchar('0' + min % 10);
_putchar('\n');
}
}
}
