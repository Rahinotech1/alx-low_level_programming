#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Description: prints the numbers with _putchar
 *
 * Return: Always 0
 */

void more_numbers(void)
{
int number, tens, units, row;

for (row = 1; row <= 10; row++)
{
for (number = 0; number <= 14; number++)
{
tens = number / 10;
units = number % 10;
if (number > 9)
putchar(tens + '0');

putchar(units + '0');
}
putchar('\n');
}
}
