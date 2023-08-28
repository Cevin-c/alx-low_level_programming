#include "lists.h"

/**
 * free_listint2 - frees all the node in a list and reset the head to NULL.
 * @head: pointer of pointer to a list.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
