#include <stdio.h>
/**
 *main - Entry point
 *The Alphabet without
 *Return: 0 if the programming ran to completion
 */
int main(void)
{
char letter;
letter = 'a';
while (letter <= 'z')
{
if (letter == 'q' || letter == 'e')
{
letter++;
}
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
