#include "holberton.h"
/**
 *print_alphabet_x10 - function that prints 10 times the alphabet,
 *in lowercase, followed by a new line.
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
char letter;
int c;
for (c = 0; c <= 10; c++)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
}
