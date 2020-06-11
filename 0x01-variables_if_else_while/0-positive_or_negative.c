#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - Entry point
 *Positive, Negative or Zero
 *Return: 0 if the programming ran to completion
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%d is positive", n);
else if (n < 0)
printf("%d is negative", n);
else
printf("%d is zero", n);

putchar('\n');
return (0);
}
