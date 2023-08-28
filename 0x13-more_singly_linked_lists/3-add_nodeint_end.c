#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of a list.
 * @head: pointer of apointer to the head of a list.
 * @n: number value to set the new node to.
 *
 * Return: pointer to the head of a list.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
