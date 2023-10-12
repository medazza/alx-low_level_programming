#include "lists.h"

/**
 * dlistint_len - Counts number of elems in a linked dlistint_t list.
 * @h: Head of dlistint_t list.
 *
 * Return: Number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
