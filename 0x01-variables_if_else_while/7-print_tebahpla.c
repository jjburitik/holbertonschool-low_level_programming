#include <stdio.h>
/**
 *main - Entry point
 *The Alphabet z to z
 *Return: 0 if the programming ran to completion
 */
int main(void)
{
char letter;
letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
