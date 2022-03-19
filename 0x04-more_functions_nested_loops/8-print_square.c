#include <stdio.h>
#include "main.h"
/**
 * print_square - Entry point
 * Description: Prints square
 * @size: print size  
 * Return: Always 0.
 */

void print_square(int size)
{
int row, column;

if ( size <= 0)
{
putchar('\n');
}
else
{
for (row = 1; row <= size; row++)
{
for (column = 1; column <= size; column++)
{
putchar('#');
}
putchar('\n');
}

}


