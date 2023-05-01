#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_listint - ...
 * @head: ...
 * Return: ...
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
