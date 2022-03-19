#include <stdio.h>
#include "main.h"
/**
 * print_line -Entry point
 *
 * Description: Prints lines
 * @n: number of lines
 * Return: void
 */

void print_line(int n)
{
int num_lines;

if (n <= 0)
{
putchar('\n');
}
else
{
for (num_lines = 1; num_lines <= n; num_lines++)
{
putchar('_');
}
putchar('\n');
}
}
