#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */

void print_numbers(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
_putchar(i);
}
_putchar('\n');
}
