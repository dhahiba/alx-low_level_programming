#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_list - ...
 * @head: ...
 * Return: ...
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
