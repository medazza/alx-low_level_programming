#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 *                 integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t ind, left, right;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;
	while (right >= left)
	{
		printf("Searching in array: ");
		for (ind = left; ind < right; ind++)
			printf("%d, ", array[ind]);
		printf("%d\n", array[ind]);

		ind = left + (right - left) / 2;
		if (array[ind] == value)
			return (ind);
		if (array[ind] > value)
			right = ind - 1;
		else
			left = ind + 1;
	}

	return (-1);
}
