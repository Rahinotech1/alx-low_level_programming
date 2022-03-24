#include <stdio.h>
#include "main.h"
/**
 * _strncat - Function that concatenates two strings
 * @dest: string that concatenates two strings by src 
 * @src: string that concatenates two strings by dest
 * @n:
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
int k, l;

k = l = 0;
while (*(dest + k))
k++;
while (l < n && *(src + k))
{
*(dest + k) = *(src + l);
k++;
l++;
}
if (l < n)
*(dest + k) = *(src + l);
return (dest);
}
