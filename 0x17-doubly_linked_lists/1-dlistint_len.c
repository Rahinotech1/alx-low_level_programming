#include "list.h"
/**
 * main - function that returns the number of element
 * @h - head of node
 * Return - Always 0
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
h = h->next;
count++;
}
return (count)
}
