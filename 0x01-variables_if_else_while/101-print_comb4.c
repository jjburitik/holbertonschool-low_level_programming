#include <stdio.h>
/**
 *main - Entry point
 *Numbers 0 to 9
 *Return: 0 if the programming ran to completion
 */
int main(void)
{
int number0, number1, number2, var0, var1;
for (number0 = 48 ; number0 < 56 ; number0++)
{
var0 = number0 + 1;
for (number1 = var0 ; number1 < 57 ; number1++)
{
var1 = number1 + 1;
for (number2 = var1 ; number2 < 58 ; number2++)
{
putchar(number0);
putchar(number1);
putchar(number2);
if (number0 == 55 && number1 == 56 && number2 == 57)
{
}
else
{
putchar(',');
putchar(' ');
}
}
var1++;
}
var0++;
}
putchar('\n');
return (0);
}
