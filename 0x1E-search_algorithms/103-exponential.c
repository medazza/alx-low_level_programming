#include "search_algos.h"

/**
 * _binary_search - function that searches for a value in a sorted array of
 *                 integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @left: left element
 * @right: right element
 * @value: value to search for
 * Return: index of value or -1 if not found
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{

	size_t ind;

	if (array == NULL)
		return (-1);
	while (right > left)
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

/**
 * exponential_search - function that searches for a value in a sorted array
 *                      of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value to search for
 * Return: the index of the searched element or
 *       -1:If value is not present in array or if array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t ind = 0, rt;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (ind = 1; ind < size && array[ind] <= value; ind *= 2)
			printf("Value checked array [%ld] = [%d]\n", ind, array[ind]);
	}

	rt = ind < size ? ind : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", ind / 2, rt);
	return (_binary_search(array, ind / 2, rt, value));
}
