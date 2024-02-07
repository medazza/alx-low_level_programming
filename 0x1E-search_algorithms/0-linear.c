#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of
 *                 integers using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */


int linear_search(int *array, size_t size, int value)
{
	size_t inc = 0;

	if (array == NULL)
		return (-1);
	while (inc < size)
	{
		printf("Value checked array[%ld] = [%d]\n", inc, array[inc]);
		if (array[inc] == value)
			return (inc);
		inc++;
	}
	return (-1);
}
