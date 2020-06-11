#include <stdio.h>
/**
 *main - Entry point
 *Numbers 0 to 9
 *Return: 0 if the programming ran to completion
 */
int main(void)
{
int number;
for (number = 48 ; number < 58 ; number++)
{
putchar(number);
if (number <= 56)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
