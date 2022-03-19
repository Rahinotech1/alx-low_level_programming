#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Entry point
 * Description: Prints the numbers with putchar
 * Return: Always 0.
 */
void print_most_numbers(void)
{

int number;

for (number = '0'; number <= '9'; number++)
{
if (number == '2' || number == '4');

else
putchar(number);
}

putchar ('\n');

}


