#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at end of a dlistint_t list.
 * @head: Pointer to head of the dlistint_t list.
 * @n: Integer for the new node to contain.
 *
 * Return: NULL - if the function fails.
 *         Otherwise - Address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nw, *last;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->next = NULL;
	if (*head == NULL)
	{
		nw->prev = NULL;
		*head = nw;
		return (nw);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = nw;
	nw->prev = last;
	return (nw);
}
