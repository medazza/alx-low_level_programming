#include "search_algos.h"

/**
 * jump_list - function that searches for a value in a sorted list
 *             of integers using the Jump search algorithm.
 * @list: is a pointer to the head of the list to search in
 * @size: is the number of nodes in list
 * @value:  is the value to search for
 * Return: If the value is not present or the head of the list is NULL:NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	node = jump = list;
	while (jump->index + 1 < size && jump->n < value)
	{
		node = jump;
		step += step_size
		while (jump->index < step)
		{
			if (jump->index + 1 == size)
				break;
			jump = jump->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);
	while (node->index < jump->index && node->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		node = node->next;
	}
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	return (node->n == value ? node : NULL);
}
