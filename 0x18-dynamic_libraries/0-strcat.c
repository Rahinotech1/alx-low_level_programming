#include <stdio.h>
#include "main.h"
/**
 * _strcat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
int i, j;

i = j = 0;
while (*(dest + i))
i++;
while ((*(dest + i) = *(src + j)))
{
i++;
j++;
}
return (dest);
}

