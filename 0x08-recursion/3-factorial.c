#include <stdio.h>
#include "main.h"
/**
 * factorial - A fuction that returns the factorial of a given number
 * @n: integer to take factorial of
 * Return: Always 0
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
