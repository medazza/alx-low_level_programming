#include "lists.h"

/*
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to head of dlistint_t list.
 * @idx: Position to insert new node.
 * @n: Integer for the new node to contain.
 *
 * Return: NULL - if the function fails.
 *         Otherwise - Address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
