nclude <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - fuction that allocates memmory using malloc
 * @b: input amount
 * Return: pointer to new mem
 */
void *malloc_checked(unsigned int b)
{
void *n;

n = malloc(b);

if (n == NULL)
exit(98);
return (n);
}
