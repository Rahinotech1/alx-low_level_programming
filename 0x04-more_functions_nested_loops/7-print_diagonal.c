#include "main.h"
/**
 * print_diagonal - Entry point
 *
 * Description: Prints diagonals
 * @n: print int
 *  Return: Always 0.
 */

void print_diagonal(int n)
{

int i; 
int b;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (b = 0; b < i; b++)
{
putchar (' ');
}
putchar (92);
putchar ('\n');

}

}


else
{
putchar ('\n');
}

}

