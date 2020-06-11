#include <stdio.h>
/**
 *main - Entry point
 *Numbers Hexa 0 to f
 *Return: 0 if the programming ran to completion
 */
int main(void)
{
int number;
for (number = 48 ; number < 103 ; number++)
{
if (number == 58)
number = 97;
putchar(number);
}
putchar('\n');
return (0);
}
