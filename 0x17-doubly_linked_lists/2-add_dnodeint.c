#include "lists.h"

/**
 * add_dnodeint - Adds new node at beginning of a dlistint_t list.
 * @head: A pointer to head of dlistint_t list.
 * @n: The integer for new node to contain.
 *
 * Return: NULL - If the function fails .
 *         Otherwise -  Address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
