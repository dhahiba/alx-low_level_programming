#include "lists.h"
#include <stdlib.h>
/**
 * find_listint_loop_fl - ...
 * @head: ...
 * Return: ...
 */
listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *p, *e;

	if (head == NULL)
	return (NULL);
	for (e = head->next; e != NULL; e = e->next)
	{
		if (e == e->next)
			return (e);
		for (p = head; p != e; p = p->next)
			if (p == e->next)
				return (e->next);
	}
	return (NULL);
}
/**
 * free_listint_safe - ...
 * @h: ...
 * Return: ...
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loop;
	size_t len;
	int l = 1;

	if (h == NULL || *h == NULL)
			return (0);
	loop = find_listint_loop_fl(*h);
	for (len = 0; (*h != loop || l) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == loop && l)
		{
		if (loop == loop->next)
		{
			free(*h);
			break;
		}
		len++;
		next = next->next;
		free((*h)->next);
		l = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}

