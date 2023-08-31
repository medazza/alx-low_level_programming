#include "main.h"

/**
 * get_bit - returns the bit at the index.
 * @n: number to search.
 * @index: the bit to get.
 *
 * Return: state of bit or -1 if error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val_bit;

	if (index > 63)
		return (-1);
	val_bit = (n >> index) & 1;
	return (val_bit);
}
