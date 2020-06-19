#include "holberton.h"
/**
 *print_triangle - function that prints a triangle, followed by a new line.
 *@size: size of the triangle
 *
 *Return: void
 */
void print_triangle(int size)
{
int spaces, rows, pounds;
if (size <= 0)
_putchar('\n');
for (rows = 1; rows <= size; rows++)
{
spaces = 1;
pounds = 1;
for (spaces = 1; spaces <= (size - rows); spaces++)
_putchar(' ');
for (pounds = 1; pounds <= rows; pounds++)	
_putchar('#');
_putchar('\n');      
}
}
