#include "search_algos.h"

/**
  * advanced_binary_recurs - fun searches recursively for a value in a sorted
  *                          array of integers using binary search.
  * @array: A pointer to the first element of the [sub]array to search.
  * @left: starting ind of the [sub] array to search.
  * @right: ending ind of the [sub] array to search.
  * @value: value to search for.
  * Return: If the value is not present, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: prints the [sub] array being searched after each change.
  */
int advanced_binary_recurs(int *array, size_t left, size_t right, int value)
{
	size_t ind;

	if (right < left)
		return (-1);
	printf("Searching in array: ");
	for (ind = left; ind < right; ind++)
		printf("%d, ", array[ind]);
	printf("%d\n", array[ind]);
	ind = left + (right - left) / 2;
	if (array[ind] == value && (ind == left || array[ind - 1] != value))
		return (ind);
	if (array[ind] >= value)
		return (advanced_binary_recurs(array, left, ind, value));
	return (advanced_binary_recurs(array, ind + 1, right, value));
}

/**
 *advanced_binary - function that searches for a value in a sorted
 *                  array of integers
 * @array: is a pointer to the first element in the array to search in
 * @size:  the number of elements in array
 * @value: he value to search for
 * Return: return index of searched element
 * or -1 if value is not present in array or if array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recurs(array, 0, size - 1, value));
}
