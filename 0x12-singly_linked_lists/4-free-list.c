#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - frees a linked list
 * @head: the beginning of the list
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *nxt;

	current = head;

	while (current != NULL)
	{
		nxt = current->next;
		free(current->str);
		free(current);
		current = nxt;
	}
}

