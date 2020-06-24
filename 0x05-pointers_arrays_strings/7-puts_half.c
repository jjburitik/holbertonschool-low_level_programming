#include "holberton.h"
/**
 * puts_half - function that prints half of a string,
 *followed by a new line.
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length, a;

	length = 0;
	while (str[length] != 0)
		length++;
	if (length > 1)
		for (a = length / 2 + (length % 2 == 0 ? 0 : 1); a < length; a++)
			_putchar(str[a]);
	_putchar('\n');
}
