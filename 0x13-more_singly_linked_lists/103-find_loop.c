#include "lists.h"
#include <stdlib.h>
/**
 * find_listint_loop - ...
 * @head: ...
 * Return: ...
 */
listint_t *find_listint_loop(listint_t *head)
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
