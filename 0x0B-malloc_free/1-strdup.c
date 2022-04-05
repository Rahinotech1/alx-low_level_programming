#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_strdup - Fuction that returns a pointer to a newly allocated space in a memmory
 * @str: char
 * Return: Always 0
 */
char *_strdup(char *str)
{

unsigned int i, j;
char *s;

if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
;
i++;
s = malloc(i *sizeof(char));
if (s == NULL)
{
return (NULL);
}
for (j = 0; j < i; j++)
{
s[j] = str[j];
}
return (s);
}



