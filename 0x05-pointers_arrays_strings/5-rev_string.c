#include "holberton.h"
/**
 *rev_string - function that reverses a string
 *@s: String to reverse
 *
 *Return: void
 */
void rev_string(char *s)
{
int a, b, temp;
a = 0;
while (s[a + 1] != '\0')
a++;
for (b = 0; b <= a / 2; b++)
{
temp = s[b];
s[b] = s[a - b];
s[a - b] = temp;
}
}
