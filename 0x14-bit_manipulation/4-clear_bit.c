#include "main.h"

/**
 * clear_bit - clars the bit
 * @n: number to index
 * @index: index of the bit to clear
 *
 * Return: 1 for successful, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
