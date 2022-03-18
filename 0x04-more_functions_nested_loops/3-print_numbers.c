#include "main.h"
/**
 * print_numbers - Entry point
 * Description: prints the numbers with _putchar
 * Return: Always 0.
 */

void print_numbers(void)
{
int number;

for (number = '0'; number <= '9'; number++)
{
_putchar(number);
}
_putchar('\n');
}
