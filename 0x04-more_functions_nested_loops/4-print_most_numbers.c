#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Entry point
 * Description: Prints the numbers with _putchar
 * Return: Always 0.
 */
void print_most_numbers(void)
{

int i;

i = 0;
while (i < 10)
{
if (i != 2 && i != 4)
{

putchar (i + '0');
}
i++;
}

putchar ('\n');

}


