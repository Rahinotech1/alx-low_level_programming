#include "main.h"

/**
 * _memcpy - functions that copies memory area
 * @dest: location of copy
 * @src: memory point to copy
 * @n: number of bytes to copy
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
