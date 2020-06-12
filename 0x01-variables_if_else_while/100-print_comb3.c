#include <stdio.h>
/**
 *main - Entry point
 *Numbers 0 to 9
 *Return: 0 if the programming ran to completion
 */
int main(void)
{
int number0, number1, var;
var = 49;
for (number0 = 48 ; number0 < 57 ; number0++)
{
for (number1 = var ; number1 < 58 ; number1++)
{
putchar(number0);
putchar(number1);
if (number0 == 56 && number1 == 57)
{
}
else
{
putchar(',');
putchar(' ');
}
}
var++;
}
putchar('\n');
return (0);
}
