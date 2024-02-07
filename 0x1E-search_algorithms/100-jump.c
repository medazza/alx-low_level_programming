#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted
 *               array of integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: -1 If value is not present in array or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t ind, step, jump;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	ind = jump = 0;
	while (jump < size && array[jump] < value)
	{
		printf("Value checked array [%ld] = [%d]\n", jump, array[jump]);
		ind = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", ind, jump);

	jump = jump > size - 1 ? jump : size - 1;
	for (; ind < jump && array[ind] < value; ind++)
		printf("Value checked array [%ld] = [%d]\n", ind, array[ind]);
	printf("Value checked array [%ld] = [%d]\n", ind, array[ind]);

	return (array[ind] == value ? (int)ind : -1);
}
