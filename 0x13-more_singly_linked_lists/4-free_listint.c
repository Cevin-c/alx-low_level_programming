#include "lists.h"

/**
 * free_listint - frees all the node in a list.
 * @head: pointer to a list.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
