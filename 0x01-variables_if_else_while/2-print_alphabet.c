#include <stdio.h>
/**
 *main - Entry point
 *The Alphabet lower to uppercase
 *Return: 0 if the programming ran to completion
 */
int main(void)
{
char letter;
letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
