#include "lists.h"

/**
 * print_dlistint - It's prints all elements of a dlistint_t list.
 * @h: Head of dlistint_t list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
