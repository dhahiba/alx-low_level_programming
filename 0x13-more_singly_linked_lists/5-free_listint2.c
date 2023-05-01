#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_listint2 - ...
 * @head: ...
 * Return: ...
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
