#include <stdio.h>
#include "main.h"
/**
 * main - Program that prints number of arguments
 * @argc: number of arguments
 * @argv: array pointing to argument
 * Return: Always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
}
printf("%d\n", i - 1);
return (0);
}
