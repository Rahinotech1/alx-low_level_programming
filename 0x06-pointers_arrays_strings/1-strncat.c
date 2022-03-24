#include <stdio.h>
#include "main.h"
/**
 * _strncat - Function that concatenates two strings
 * @dest: string that concatenates two strings by src 
 * @src: string that concatenates two strings by dest
 * @n: numbers that contains more bytes
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = j = 0;
while (*(dest + i))
i++;
while (j < n && *(src + j))
{
*(dest + i) = *(src + j);
i++;
j++;
}
if (j < n)
*(dest + i) = *(src + j);
return (dest);
}
