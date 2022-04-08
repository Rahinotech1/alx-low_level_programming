#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - Fuction that allocates memory for an array
 * @nmemb: array number
 * @size: size of ea array element
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
p[i] = 0;
return (p);
}
