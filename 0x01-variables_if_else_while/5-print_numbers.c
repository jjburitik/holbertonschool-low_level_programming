#include <stdio.h>
/**
 *main - Entry point
 *Numbers 0 to 9
 *Return: 0 if the programming ran to completion
 */
int main(void)
{
int number;
for (number = 0 ; number < 10 ; number++)
printf("%d", number);
putchar('\n');
return (0);
}
