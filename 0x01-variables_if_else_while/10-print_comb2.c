#include <stdio.h>
/**
 *main - Entry point
 *Numbers 0 to 9
 *Return: 0 if the programming ran to completion
 */
int main(void)
{
int number0, number1;
for (number0 = 48 ; number0 < 58 ; number0++)
{
for (number1 = 48 ; number1 < 58 ; number1++)
{
putchar(number0);
putchar(number1);
if (number0 == 57 && number1 == 57)
{
}
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
