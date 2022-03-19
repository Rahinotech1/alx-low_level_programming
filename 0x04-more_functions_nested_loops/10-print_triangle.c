#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Entry point
 * Description: Prints diagonals
 * @size: size of the triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
int row, hashes, spaces;

if (size <= 0)
{
putchar('\n');
}
else
{
for (row = 1; row <= size; row++)
{
for (spaces = size - row; spaces >= 1; spaces--)
{
putchar(' ');
}
for (hashes = 1; hashes <= row; hashes++)
{
putchar('#');
}
putchar('\n');
}
}
}
