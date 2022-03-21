#include <stdio.h>
#include "main.h"
/**
 * swap_int - swap the values of int a and int b
 * @a: first int to swap
 * @b: second int to swap
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
