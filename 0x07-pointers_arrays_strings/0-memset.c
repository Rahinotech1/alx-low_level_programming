#include <stdio.h>
#include "main.h"
/**
 * _memset - fills the first byte of memory with a constant byte
 * @s: memory space to be filled	
 * @b: byte to fill with
 * @n: number of spaces to fill
 * Return: ALways 0
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
