#include "main.h"
/**
 * main - Entry point
 * Description: the main fuction is to print all the alphabet in lowercase
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
