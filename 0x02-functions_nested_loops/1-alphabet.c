#include "holberton.h"

/**
 *print_alphabet - function that prints the alphabet, in lowercase,
 *followed by a new line.
 */
void print_alphabet(void)
{
char letter;
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
