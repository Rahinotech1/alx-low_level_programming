#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

void print_alphabet(void)
{
char ch;

ch = 'a';

while (ch <= 'z')
{

_putchar(ch);
ch++;
}
_putchar('\n');
}
