#include "holberton.h"

/**
 *print_last_digit - function that prints the last digit of a number..
 *@n: number to check
 *Return: the last digit of n
 */
int print_last_digit(int n)
{
int var;
var = n % 10;
if (var < 0)
var = -var;
_putchar('0' + var);
return (var);
}
