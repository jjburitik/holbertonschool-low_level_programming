#include <stdio.h>
/**
 *main - Entry point
 *Numbers 00 01 to 98 99
 *Return: 0 if the programming ran to completion
 */
int main(void)
{
int number01, number23;

for (number01 = 0 ; number01 < 100 ; number01++)
{
for (number23 = number01 + 1 ; number23 < 100 ; number23++)
{
putchar('0' + number01 / 10);
putchar('0' + number01 % 10);
putchar(' ');
putchar('0' + number23 / 10);
putchar('0' + number23 % 10);
if (number01 == 98 && number23 == 99)
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
