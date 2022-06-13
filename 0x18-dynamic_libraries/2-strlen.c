#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to find length
 * Return: Always 0
 */
int _strlen(char *s)
{
int i = 0;

while (*(s + i))
i++;
return (i);
}

