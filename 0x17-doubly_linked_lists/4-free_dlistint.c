#include "lists.h"

/**
 * free_dlistint - It frees a linked dlistint_t list.
 * @head: Head of dlistint_t list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
