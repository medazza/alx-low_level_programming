#include "search_algos.h"

/**
 *interpolation_search - function that searches for a value in a sorted array
 *                       of integers using the Interpolation search algorithm
 *@array: a pointer to the first element of the array to search in
 *@size: the number of elements in array
 *@value: is the value to search for
 *Return: -1:If value is not present in array or if array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t ind, l, r;

	if (array == NULL)
		return (-1);
	l = 0;
	r = size - 1;
	while (r >= l)
	{
		ind = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (ind < size)
		{
			printf("Value checked array [%ld] = [%d]\n", ind, array[ind]);
		}
		else
		{
			printf("Value checked array [%ld] is out of range\n", ind);
			break;
		}
		if (array[ind] == value)
			return (ind);
		if (array[ind] > value)
			r = ind - 1;
		else
			l = ind + 1;
	}
	return (-1);
}
