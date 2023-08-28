#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverse a list.
 * @head: pointer of a pointer to a list.
 *
 * Return: pointer to list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}
