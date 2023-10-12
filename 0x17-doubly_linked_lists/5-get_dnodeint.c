#include "lists.h"

/**
 * get_dnodeint_at_index - It locates a node in dlistint_t list.
 * @head: Head of dlistint_t list.
 * @index: Node to locate.
 *
 * Return: NULL - if the node does not exist.
 *         Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
