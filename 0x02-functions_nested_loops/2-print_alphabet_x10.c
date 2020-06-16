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
c=0;
while (c < 10)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
c++;
}
}
