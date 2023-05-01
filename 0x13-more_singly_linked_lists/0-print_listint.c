#include "lists.h"
#include <stdio.h>
/**
 * print_listint - ...
 * @h: ...
 * Return: ...
 */
size_t print_listint(const listint_t *h)
{
size_t s = 0;

	while (h)
	{
	if (!h->n)
		printf("[0] (nil)\n");
	else
		printf("%u\n", h->n);
	h = h->next;
	s++;
	}
	return (s);
}
