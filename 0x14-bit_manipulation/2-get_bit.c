#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @ln: unsigned long int input.
 * @indx: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int ln, unsigned int indx)
{
	unsigned int j;

	if (ln == 0 && indx < 64)
		return (0);

	for (j = 0; j <= 63; ln >>= 1, j++)
	{
		if (indx == j)
		{
			return (ln & 1);
		}
	}

	return (-1);
}
