#include "holberton.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers,
 *followed by a new line.
 * @a: input array
 * @n: number of elements of the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
int b;

for (b = 0; b < n; b++)
printf("%d%s", a[b], b < n - 1 ? ", " : "");
printf("\n");
}
